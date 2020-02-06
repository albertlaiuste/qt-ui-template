#include "mainpanel.h"

#include "buttons/custom_button.h"
#include "textedits/custom_text_edit.h"

#include <QGridLayout>

namespace DemoUI {

MainPanel::MainPanel(QWidget* parent) :
    QWidget{parent},
    m_buttonLeft{new CustomButton(this)},
    m_buttonRight{new CustomButton(this)},
    m_textEdit{new CustomTextEdit(this)}
{
    setupStyle();
    setupLayout();
    setupWidgets();
}

void MainPanel::setupStyle()
{
    QPalette pal = palette();
    pal.setColor(QPalette::Window, Qt::black);
    setAutoFillBackground(true);
    setPalette(pal);
}

void MainPanel::setupLayout()
{
    setMinimumSize(600, 400);

    auto l = new QGridLayout(this);
    l->setColumnMinimumWidth(0, 50);
    l->setColumnStretch(0, 25);
    l->setColumnStretch(1, 50);
    l->setColumnMinimumWidth(2, 50);
    l->setColumnStretch(2, 25);
    l->setRowStretch(0, 80);
    l->setRowStretch(1, 20);

    l->addWidget(m_textEdit, 0, 0, 1, 3);
    l->addWidget(m_buttonLeft, 1, 0);
    l->addWidget(m_buttonRight, 1, 2);
}

void MainPanel::setupWidgets()
{
    m_buttonLeft->setText("Left");
    m_buttonRight->setText("Right");

    connect(m_buttonLeft, &QPushButton::pressed, [this] {
        m_textEdit->append("Pressed left");
    });
    connect(m_buttonRight, &QPushButton::pressed, [this] {
        m_textEdit->append("Pressed right");
    });
}

}
