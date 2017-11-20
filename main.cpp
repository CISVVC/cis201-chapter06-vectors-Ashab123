/*
 * File: BankStatement.cpp
 * Developer: Akhir ShaBazz-Regains
 * Email: akhirshabazz@gmail.com
 * Description: This program will prompt the user to enter the day, amount, and description
 * of transactions and will print out a statement for the month.
 */
#include <iostream>
#include <string>
#include <vector>
#include "transaction.h"
#include "statement.h"

int main() 
{
	Statement statement;
	statement.read();
	statement.compute_balances();
	statement.print();
	
	return 0;
}
