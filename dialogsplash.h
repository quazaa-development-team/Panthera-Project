#ifndef DIALOGSPLASH_H
#define DIALOGSPLASH_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogSplash;
}

class DialogSplash : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogSplash)
public:
    explicit DialogSplash(QWidget *parent = 0);
    virtual ~DialogSplash();
	void updateProgress(int percent, QString status);

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogSplash *m_ui;
};

#endif // DIALOGSPLASH_H
