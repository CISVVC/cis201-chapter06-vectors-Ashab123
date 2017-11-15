#include <iostream>
#include "transaction.h"
#include <vector>

Transaction::Transaction()
{
   day = 0;
   amount = 0.0;
}

void Transaction::read()
{
   std::cout << "Enter the day: ";
   std::cin >> day;
   std::cout << "Enter the amount: ";
   std::cin >> amount;
   std::cin.ignore();
   std::cout << "Enter a desctiption: ";
   std::getline(std::cin,description);
}

int Transaction::get_day() const
{
   return day;
}

double Transaction::get_amount() const
{
   return amount;
}

void Transaction::print() const
{
   std::cout << std:: endl;
   std::cout << "day:" << day << std::endl;
   std::cout << "amount:" << amount << std::endl;
   std::cout << "description:" << description << std::endl;
}


