#include "mainwindow.h"
#include "ui_mainwindow.h"

/*! Metoda dla wizalizacji plików znalezionych na dysku komputera
 */

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());
    model->setFilter(QDir::AllEntries | QDir::NoDotAndDotDot);

    ui->treeView->setModel(model);
    ui->treeView->setMinimumSize(600,300);
    ui->treeView->header()->setSectionResizeMode(QHeaderView::ResizeToContents);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    qDebug() << index.data(QFileSystemModel::FilePathRole);
    ui->statusBar->showMessage(index.data(QFileSystemModel::FilePathRole).toString());
}

void MainWindow::on_actionExit_triggered()
{
    close();
}
