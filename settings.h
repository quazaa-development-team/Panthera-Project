#ifndef SETTINGS_H
#define SETTINGS_H

#include <QtGui/QDialog>

namespace Ui {
    class Settings;
}

class Settings : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Settings)
public:
    explicit Settings(QWidget *parent = 0);
    virtual ~Settings();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Settings *m_ui;

private slots:
    void on_pushButton_released();
};

#endif // SETTINGS_H
