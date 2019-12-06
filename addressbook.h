#pragma once

#include <QtWidgets/QWidget>
#include "ui_addressbook.h"

class AddressBook : public QWidget
{
	Q_OBJECT

public:
	AddressBook(QWidget *parent = Q_NULLPTR);

private slots:
	void on_addButton_clicked();

private:
	Ui::AddressBookClass ui;
};
