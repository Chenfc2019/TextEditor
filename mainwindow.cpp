#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFontDatabase>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->resize(1200,1500);

    //设置窗口名称
    this->setWindowTitle("Editor");
    //设置窗口图标
    this->setWindowIcon(QIcon(":/images/word.png"));
    //设置菜单项
    //文件
    ui->actionnew->setIcon(QIcon(":/images/xinjian.png"));
    ui->actionopen->setIcon(QIcon(":/images/dakai.png"));
    ui->actionsave->setIcon(QIcon(":/images/baocun.png"));
    ui->actionsaveAs->setIcon(QIcon(":/images/lingcun.png"));
    ui->actionprint->setIcon(QIcon(":/images/dayin.png"));
    ui->actionprintPreview->setIcon(QIcon(":/images/yulan.png"));
    //编辑
    ui->actionundo->setIcon(QIcon(":/images/chexiao.png"));
    ui->actionredo->setIcon(QIcon(":/images/huifu.png"));
    ui->actioncut->setIcon(QIcon(":/images/jianqie.png"));
    ui->actioncopy->setIcon(QIcon(":/images/fuzhi.png"));
    ui->actionpaste->setIcon(QIcon(":/images/niantie.png"));
    //格式
    ui->actionbold->setIcon(QIcon(":/images/jiacu.png"));
    ui->actionitalic->setIcon(QIcon(":/images/qingxie.png"));
    ui->actionunderline->setIcon(QIcon(":/images/xiahuaxian.png"));
    //段落
    ui->actionleft->setIcon(QIcon(":/images/zuoduiqi.png"));
    ui->actionright->setIcon(QIcon(":/images/youduiqi.png"));
    ui->actioncenter->setIcon(QIcon(":/images/juzhong.png"));
    ui->actionjustify->setIcon(QIcon(":/images/juzhong.png"));
    //颜色
    ui->actioncolor->setIcon(QIcon(":/images/yanse.png"));



    //加载字体
    QFontDatabase fontdb;
    foreach (int fontsize, fontdb.standardSizes()) {
        ui->sizecomboBox->addItem(QString::number(fontsize));
    }
    ui->sizecomboBox->setCurrentIndex(ui->sizecomboBox->findText(QString::number(QApplication::font().pointSize())));

    ui->toolBar->addWidget(ui->widget);

    //设置滚动条
    ui->mdiArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    ui->mdiArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
}

MainWindow::~MainWindow()
{
    delete ui;
}
