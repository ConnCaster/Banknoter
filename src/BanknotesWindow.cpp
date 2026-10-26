#include "BanknotesWindow.h"
#include "ui_BanknotesWindow.h"

BanknotesWindow::BanknotesWindow(QWidget *parent)
    : QMainWindow(parent), ui_(std::make_unique<Ui::BanknotesWindow>()) {
  ui_->setupUi(this);


  auto* header = ui_->banknotesTable->horizontalHeader();

  header->setSectionResizeMode(0, QHeaderView::Stretch);
  header->setSectionResizeMode(1, QHeaderView::ResizeToContents);
  header->setSectionResizeMode(2, QHeaderView::Stretch);
  header->setSectionResizeMode(3, QHeaderView::ResizeToContents);
  header->setSectionResizeMode(4, QHeaderView::ResizeToContents);
  
  connect(ui_->exitButton, &QPushButton::clicked, this, [this] () {
    this->close();
  });

  connect(ui_->backButton, &QPushButton::clicked, this, &BanknotesWindow::BackRequested);
}

BanknotesWindow::~BanknotesWindow() = default;