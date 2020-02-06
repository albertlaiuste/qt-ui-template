#include "custom_button.h"

namespace {
constexpr uint32_t DEFAULT_BUTTON_WIDTH = 100;
constexpr uint32_t DEFAULT_BUTTON_HEIGHT = 50;
}

namespace DemoUI {

CustomButton::CustomButton(QWidget* parent) :
    QPushButton{parent}
{
    setupStyle();
}

void CustomButton::setupStyle()
{
    setMinimumSize(DEFAULT_BUTTON_WIDTH, DEFAULT_BUTTON_HEIGHT);
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    QString style;
    style.append("QPushButton{background:#ff99ff; border: 1px solid #6666ff;}");
    style.append("QPushButton:hover{background:#ffccff;}");
    style.append("QPushButton:pressed{background:#ff1aff;}");
    setStyleSheet(style);
}

}
