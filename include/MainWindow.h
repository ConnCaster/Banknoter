#ifndef BANKNOTER_MAINWINDOW_H
#define BANKNOTER_MAINWINDOW_H

#include <QMainWindow>
#include <memory>

#include "BanknotesWindow.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    std::unique_ptr<Ui::MainWindow> ui_;

    std::unique_ptr<BanknotesWindow> banknotesWindow_;
};

#endif