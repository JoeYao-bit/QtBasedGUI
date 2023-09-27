#include <iostream>
#include "../mainwindow.hpp"
#include <QApplication>
#include <qtextcodec.h>

#include <iostream>
#include <QDebug>
#include <QFile>
using namespace std;
// 需要改界面时，直接右击mainwindow.ui转到qt编辑器下设计界面，完成后需要重新右击mainwindow.ui选择UIC生成ui_mainwindow.hpp并替换之前的文件。
int main(  int argc, char *argv[] )
{
    cout << "Hello World!" << endl;

    //MainWindow w;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
