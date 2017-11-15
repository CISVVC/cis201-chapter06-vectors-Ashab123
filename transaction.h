#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>

class Transaction
{
public:
   Transaction();
   void read();
   int get_day() const;
   double get_amount() const;
   void print() const;
private:
   int day;
   double amount;
   std::string description;
};

#endif
