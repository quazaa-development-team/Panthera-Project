#ifndef SPLASH_H
#define SPLASH_H

#include <QtGui/QDialog>

namespace Ui {
    class Splash;
}

class Splash : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Splash)
public:
    explicit Splash(QWidget *parent = 0);
    virtual ~Splash();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Splash *m_ui;
};

#endif // SPLASH_H
