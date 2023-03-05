#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QTreeView>
#include <QDebug>

/*! Deklaracja zmiennych okna głównego
 */

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_actionExit_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
