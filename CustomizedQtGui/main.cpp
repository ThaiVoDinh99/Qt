// #include "CustomizedQtGui.h"
#include <QQuickView>
#include <QGuiApplication>
#include "CustomModel.h"
#include <QCoreApplication>
#include <QQmlEngine>
#include <QQmlContext>
#include "CustomEngine.h"

int main(int argc, char** argv)
{
    // CustomizedQtGui customGui(argc, argv);
    QGuiApplication app(argc, argv);

    printf("Number of arguments: %d\n", argc);

    // for (int i = 0; i < argc; ++i) {
    //     printf("Argument %d: %s\n", i, argv[i]);
    // }

    // QQuickView view;
    // view.setSource(QUrl("qrc:/main.qml"));

    // CustomModel* model = new CustomModel();

    // view.engine()->rootContext()->setContextProperty("customModel", model);

    // QEvent* event = new QEvent(QEvent::HoverMove);

    // view.show();
    // qWarning() << "SEND EVENT";
    // QCoreApplication::sendEvent(model, event);

    CustomEngine engine;

    return app.exec();
}