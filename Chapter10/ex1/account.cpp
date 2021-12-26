#include <iostream>
#include "account.h"

Account::Account(const std::string & depositor_name,
        const std::string & acc_num,
        int balance)
{
   this->depositor_name = depositor_name;
   this->acc_num = acc_num;
   this->balance = balance;
}

void Account::show() const
{
   std::cout << "Depositor's name: " << depositor_name << '\n';
   std::cout << "Account number: " << acc_num << '\n';
   std::cout << "Account balance: $ " << balance << '\n';
}

bool Account::deposit(int money)
{
   if (money < 0) {
      std::cout << "Cannot deposit negative money!\n";
      return false;
   }
   this->balance += money;
   return true;
}

bool Account::withdraw(int money)
{
   if (money < 0) {
      std::cout << "Cannot withdraw negative money!\n";
      return false;
   }

   if (this->balance - money < 0) {
      std::cout << "Not enough money!\n";
      return false;
   }

   this->balance -= money;
   return true;
}
