#ifndef DIALOGPROFILE_H
#define DIALOGPROFILE_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogProfile;
}

class DialogProfile : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogProfile)
public:
    explicit DialogProfile(QWidget *parent = 0);
    virtual ~DialogProfile();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogProfile *m_ui;

private slots:
	void on_pushButtonCancel_clicked();
	void on_pushButtonOK_clicked();
	void on_treeWidgetProfileNavigation_itemSelectionChanged();
};

#endif // DIALOGPROFILE_H
