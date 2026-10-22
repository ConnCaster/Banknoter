#ifndef BANKNOTER_BANKNOTESWINDOW_H
#define BANKNOTER_BANKNOTESWINDOW_H

#include <QMainWindow>
#include <memory>

namespace Ui {
    class BanknotesWindow;
}

class BanknotesWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit BanknotesWindow(QWidget* parent = nullptr);
    ~BanknotesWindow() override;

private:
    std::unique_ptr<Ui::BanknotesWindow> ui_;

};

#endif //BANKNOTER_BANKNOTESWINDOW_H
