#ifndef DIALOGCREATETORRENT_H
#define DIALOGCREATETORRENT_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogCreateTorrent;
}

class DialogCreateTorrent : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogCreateTorrent)
public:
    explicit DialogCreateTorrent(QWidget *parent = 0);
    virtual ~DialogCreateTorrent();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogCreateTorrent *m_ui;
};

#endif // DIALOGCREATETORRENT_H
