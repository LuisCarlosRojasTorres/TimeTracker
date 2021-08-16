#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->cB_ARN->addItem(QString("Perceptron"));
    ui->cB_ARN->addItem(QString("Adaline"));
    ui->cB_ARN->addItem(QString("Adaline"));


    setWindowTitle(QString("TimeTracker" + version));
    showMaximized();

    connect(ui->actionAbout, &QAction::triggered, about, &DlgAbout::exec);
}

MainWindow::~MainWindow()
{
    delete ui;
}

