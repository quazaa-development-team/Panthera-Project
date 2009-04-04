#ifndef DIALOGWIZARD_H
#define DIALOGWIZARD_H

#include <QtGui/QDialog>

namespace Ui {
    class DialogWizard;
}

class DialogWizard : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DialogWizard)
public:
    explicit DialogWizard(QWidget *parent = 0);
    virtual ~DialogWizard();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::DialogWizard *m_ui;

private slots:
	void on_pushButtonSystemExit_clicked();
	void on_pushButtonSystemFinish_clicked();
	void on_pushButtonSystemBack_clicked();
	void on_pushButtonNetworksExit_clicked();
	void on_pushButtonNetworksNext_clicked();
	void on_pushButtonNetworksBack_clicked();
	void on_pushButtonChatExit_clicked();
	void on_pushButtonChatNext_clicked();
	void on_pushButtonChatBack_clicked();
	void on_pushButtonSharesExit_clicked();
	void on_pushButtonSharesNext_clicked();
	void on_pushButtonSharesBack_clicked();
	void on_pushButtonWelcomeExit_clicked();
	void on_pushButtonWelcomeNext_clicked();
	void on_pushButtonConnectionExit_clicked();
	void on_pushButtonConnectionNext_clicked();
	void on_pushButtonConnectionBack_clicked();
};

#endif // DIALOGWIZARD_H
