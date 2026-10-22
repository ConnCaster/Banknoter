#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui_(std::make_unique<Ui::MainWindow>()) {
  ui_->setupUi(this);

  connect(ui_->openBanknotesButton, &QPushButton::clicked, this, [this] {
    if (!banknotesWindow_) {
      banknotesWindow_ = std::make_unique<BanknotesWindow>();
    }

    banknotesWindow_->show();
    banknotesWindow_->raise();
    banknotesWindow_->activateWindow();
    hide();
  });
}

MainWindow::~MainWindow() = default;