#include <QWidget>
#include <QApplication>
#include "find_dialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Find_Dialog form_for_find;
    form_for_find.show();

    return app.exec();
}
