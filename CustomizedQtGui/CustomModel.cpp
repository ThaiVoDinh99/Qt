#include "CustomModel.h"
#include <thread>
#include <chrono>

CustomModel::CustomModel(QObject* parent)
    : QObject(parent)
{
    installEventFilter(this);
}

CustomModel::~CustomModel()
{

}

bool CustomModel::event(QEvent* event)
{
    qWarning() << "THAIVD";
    return QObject::event(event);
}

bool CustomModel::eventFilter(QObject* watched, QEvent* event)
{
    qWarning() << "THAIVD FILTER";
    return QObject::eventFilter(watched, event);
}