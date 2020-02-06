#pragma once

#include <QMainWindow>

namespace DemoUI {
class MainPanel;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);

private:
    MainPanel* m_panel;
};

}
