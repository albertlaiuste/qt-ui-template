#pragma once

#include <QTextEdit>

namespace DemoUI {
class CustomTextEdit : public QTextEdit
{
    Q_OBJECT

public:
    CustomTextEdit(QWidget* parent = nullptr);

private:
    void setupStyle();
};

}
