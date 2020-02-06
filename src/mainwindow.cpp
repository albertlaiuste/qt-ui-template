#include "mainwindow.h"

#include "widgets/mainpanel.h"

namespace DemoUI {

MainWindow::MainWindow(QWidget* parent) :
    QMainWindow{parent},
    m_panel{new MainPanel(this)}
{
    setCentralWidget(m_panel);
}

}
