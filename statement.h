#ifndef STATEMENT_H
#define STATEMENT_H

#include <iostream>
#include "transaction.h"
#include <vector>

class Statement
{
public:
   Statement();
   void read();
   double compute_balances();
   void print();
   double get_average_daily_balance();
   double get_minimum_daily_balance();
private:
   std::vector<Transaction> transactions;
   std::vector<double> daily_balances;
};

#endif
