#ifndef MultipleDevices_H
#define MultipleDevices_H

#include <QDialog>

namespace Ui {
class MultipleDevices;
}

class MultipleDevices : public QDialog
{
    Q_OBJECT

public:
    explicit MultipleDevices(QWidget *parent = 0);
    void tabLANSettings();
    ~MultipleDevices();

    void tabWLANSettings();
private:
    Ui::MultipleDevices *ui;

};

#endif // MultipleDevices_H
