#include <QApplication>
#include <QtWidgets>
#include "qfonticon.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFontIcon::addFont(":/fontawesome.ttf");

    QGridLayout * iconsLayout = new QGridLayout;
    QWidget * iconsWidget = new QWidget;
    iconsWidget->setWindowTitle("Some icons from awesome font");
    iconsWidget->setLayout(iconsLayout);

    int code = 0xf030;

    for (int x=0; x<10; x++)
    {
        for (int y=0;y<10; y++)
        {
            QPushButton * button = new QPushButton(QFontIcon::icon(code),QString::number(code));
            iconsLayout->addWidget(button,x,y);

            if (y == 5)
                button->setDisabled(true);

            code++;
        }
    }

    iconsWidget->show();



    return a.exec();
}
