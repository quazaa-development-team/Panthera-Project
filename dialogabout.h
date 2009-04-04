#ifndef DIALOGABOUT_H
#define DIALOGABOUT_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogAbout;
}

class DialogAbout : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogAbout)
public:
    explicit DialogAbout(QWidget *parent = 0);
    virtual ~DialogAbout();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogAbout *m_ui;

private slots:
	void on_pushButtonOK_clicked();
};

#endif // DIALOGABOUT_H
