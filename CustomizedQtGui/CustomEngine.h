#include <QObject>
#include <QDebug>

class CustomEngine : QObject
{
    Q_OBJECT
public:
    CustomEngine(QObject* parent = nullptr);
    ~CustomEngine();

    enum class EngineState
    {
        Startup,
        ShowApp,
        Running,
        Terminate
    };

protected:
    void timerEvent(QTimerEvent* event) override;


private:
    EngineState m_state;
};