#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>
#include <QPointer>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void handleNavigation(QTreeWidgetItem *where, int column);

private:
    void replaceSim(QWidget *newSim);

    Ui::MainWindow *ui;
    QPointer<QWidget> activeSim;
};
#endif // MAINWINDOW_H
