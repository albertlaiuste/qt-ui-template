#pragma once

#include <QPushButton>

namespace DemoUI {
class CustomButton : public QPushButton
{
    Q_OBJECT

public:
    CustomButton(QWidget* parent = nullptr);

private:
    void setupStyle();
};

}
