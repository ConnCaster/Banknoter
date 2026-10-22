#include "BanknotesWindow.h"
#include "ui_BanknotesWindow.h"

BanknotesWindow::BanknotesWindow(QWidget *parent)
    : QMainWindow(parent), ui_(std::make_unique<Ui::BanknotesWindow>()) {
  ui_->setupUi(this);

  ui_->banknotesTable->setColumnWidth(0, 170);
  ui_->banknotesTable->setColumnWidth(1, 170);
  ui_->banknotesTable->setColumnWidth(2, 90);
  ui_->banknotesTable->setColumnWidth(3, 90);
  ui_->banknotesTable->setColumnWidth(4, 90);
}

BanknotesWindow::~BanknotesWindow() = default;