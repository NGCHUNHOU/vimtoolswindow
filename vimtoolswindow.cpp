#include "vimtoolswindow.h"
#include "ui_vimtoolswindow.h"
#include "customwidget.h"
#include "tabbarhorizon.h"
#include <fstream>

VimToolsWindow::VimToolsWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::VimToolsWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->setStyle(new tabbarhorizon);
    ui->tabWidget->setStyleSheet("QTabWidget::tab-bar {min-height: 800px;}");
}

void VimToolsWindow::changeText()
{
//    ui->targetText->setText("hello world");
//    std::ofstream fs;
//    fs.open("example.md");
//    fs << "# first paragraph \n 1. item1 \n 2. item2 \n 3. item3";
//    fs.close();
};

VimToolsWindow::~VimToolsWindow()
{
    delete ui;
}
