#include "CustomEngine.h"

CustomEngine::CustomEngine(QObject* parent) 
    : QObject(parent)
{
    startTimer(std::chrono::seconds(1));
}

CustomEngine::~CustomEngine()
{

}

void CustomEngine::timerEvent(QTimerEvent* event)
{
    qWarning() << "Trigger event";
    switch (m_state)
    {
    case EngineState::Startup:
        m_state = EngineState::ShowApp;
        break;
    case EngineState::ShowApp:
        m_state = EngineState::Running;
        break;
    case EngineState::Running:
        break;
    case EngineState::Terminate:
        break;
    default:
        break;
    }
    QObject::timerEvent(event);
}