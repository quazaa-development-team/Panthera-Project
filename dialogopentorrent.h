#ifndef DIALOGOPENTORRENT_H
#define DIALOGOPENTORRENT_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogOpenTorrent;
}

class DialogOpenTorrent : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogOpenTorrent)
public:
    explicit DialogOpenTorrent(QWidget *parent = 0);
    virtual ~DialogOpenTorrent();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogOpenTorrent *m_ui;
};

#endif // DIALOGOPENTORRENT_H
