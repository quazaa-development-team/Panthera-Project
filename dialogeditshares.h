#ifndef DIALOGEDITSHARES_H
#define DIALOGEDITSHARES_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogEditShares;
}

class DialogEditShares : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogEditShares)
public:
    explicit DialogEditShares(QWidget *parent = 0);
    virtual ~DialogEditShares();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogEditShares *m_ui;

private Q_SLOTS:
	void on_pushButtonRemove_clicked();
	void on_pushButtonAdd_clicked();
	void on_pushButtonOk_clicked();
	void on_pushButtonCancel_clicked();
};

#endif // DIALOGEDITSHARES_H
