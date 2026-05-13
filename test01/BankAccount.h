#include "main.h"

class BankAccount {
public:
	string name;
	int balance;
	string owner;

	string toString() {
		string s = "BankAccount:\n";
		s += "ID: " + name + "\n";
		s += "balance: " + to_string(balance) + "\n";
		s += "Owner: " + owner;

		return s;
	}
};