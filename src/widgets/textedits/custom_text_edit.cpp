#include "custom_text_edit.h"

namespace DemoUI {

CustomTextEdit::CustomTextEdit(QWidget* parent) :
    QTextEdit{parent}
{
    setupStyle();
}

void CustomTextEdit::setupStyle()
{
    QString style;
    style.append("QTextEdit{background:#ffe6ff; border: 1px solid #6666ff;}");
    setStyleSheet(style);
}

}
