#include <QStateMachine>
#include "AgentManager.h"
#include <iostream>
#include <QtWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc , argv);
    QMainWindow mainwindow;
    AgentManager::getInstance().createAgent();
    QStateMachine statemachine;
    std::cout << "Hello From Delta" << std::endl;

    mainwindow.showNormal();
    app.exec();
    return 0;
}
