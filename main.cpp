#include <iostream>
#include "transaction.h"
#include "statement.h"
#include <vector>

void print_transactions(const std::vector<Transaction> t)
{
    for(int i=0;i<t.size();i++)
        t[i].print();
}

int main ()
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
   print_transactions(transaction);

   return 0;
}
