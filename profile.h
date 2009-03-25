#ifndef PROFILE_H
#define PROFILE_H

#include <QtGui/QDialog>
#include "ui_profile.h"

namespace Ui {
    class Profile;
}

class Profile : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(Profile)
public:
    explicit Profile(QWidget *parent = 0);
    virtual ~Profile();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Profile *m_ui;

private slots:
    void on_treeWidgetProfileNavigation_itemClicked(QTreeWidgetItem* item, int column);
};

#endif // PROFILE_H
