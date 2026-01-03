#include <QObject>
#include <QGuiApplication>

class CustomizedQtGui : public QGuiApplication
{
public:
    CustomizedQtGui(int argc, char** argv);
    ~CustomizedQtGui();

private:
    
};