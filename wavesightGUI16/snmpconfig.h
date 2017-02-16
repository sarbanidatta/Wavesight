#ifndef SnmpConfig_H
#define SnmpConfig_H

#include <QMainWindow>

namespace Ui {
class SnmpConfig;
}

class SnmpConfig : public QMainWindow
{
    Q_OBJECT

public:
    explicit SnmpConfig(QWidget *parent = 0);
    ~SnmpConfig();

private slots:
    void on_pushButton_edit_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SnmpConfig *ui;
};

#endif // SnmpConfig_H
