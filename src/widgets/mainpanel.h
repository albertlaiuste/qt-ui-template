#pragma once

#include <QWidget>

namespace DemoUI {
class CustomButton;
class CustomTextEdit;
class MainPanel : public QWidget
{
    Q_OBJECT

public:
    MainPanel(QWidget* parent = nullptr);

private:
    void setupStyle();
    void setupLayout();
    void setupWidgets();

private:
    CustomButton* m_buttonLeft;
    CustomButton* m_buttonRight;
    CustomTextEdit* m_textEdit;
};

}
