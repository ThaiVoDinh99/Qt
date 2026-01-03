#include <QObject>
#include <QDebug>

class CustomModel : public QObject
{
    Q_OBJECT
public:
    CustomModel(QObject* parent = nullptr);
    virtual ~CustomModel();

    bool eventFilter(QObject* watched, QEvent* event) override;
    bool event(QEvent* event) override;


public slots:
    void trigger() {
        qWarning() << "THAIVD 1111";
    }

};