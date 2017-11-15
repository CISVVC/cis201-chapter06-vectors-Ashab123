#include <iostream>
#include "statement.h"
#include <vector>

const int MAX_DAY = 30;

Statement::Statement()
{
   std::vector<Transaction> transactions;
   std::vector<double> daily_balances(MAX_DAY);
    
}

void Statement::read()
{
   std::vector<Transaction> transaction;
   bool more = true;
   while(more)
   {
      Transaction t;
      t.read();
      transaction.push_back(t);
      std::cout << "Would you like to enter another? (Y/N)";
      char response;
      std::cin >> response;
      if(response != 'y' && response != 'Y')
         more = false;
   } 

   compute_balances();
}

double compute_balances() 
{
   std::vector<Transaction> transaction;
   for (int i = 0; i < MAX_DAY; i++) 
   {
      daily_balances.push_back( transaction.get_amount() );
   }
}

void print()
{
   
}

double get_average_daily_balance()
{
	return 0;
}

double get_minimum_daily_balance()
{
   return 0;
}

