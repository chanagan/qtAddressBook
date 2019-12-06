#include "stdafx.h"
#include "addressbook.h"
#include "adddialog.h"

AddressBook::AddressBook(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

void AddressBook::on_addButton_clicked() {
	AddDialog dialog(this);
	dialog.exec();
}
