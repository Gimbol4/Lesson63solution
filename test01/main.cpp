#include "BankAccount.h"

BankAccount getRichOwher(BankAccount accounts[]) {
	int index = 0;

	for (int i = 0; i < 3; i++)
	{
		if (accounts[i].balance > accounts[index].balance) {
			index = i;
		}
	}
	return accounts[index];
}

int main() {
	BankAccount account01;
	BankAccount account02;
	BankAccount account03;

	BankAccount accounts[]{ account01, account02, account03 };

	account01.name = "123456AX";
	account01.balance = 1000;
	account01.owner = "Gleb";

	account02.name = "542134WC";
	account02.balance = 2500;
	account02.owner = "Yury";

	account03.name = "173423AD";
	account03.balance = 5000;
	account03.owner = "Stas";
	return 0;
}