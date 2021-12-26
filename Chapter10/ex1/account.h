#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

class Account
{
private:
   std::string depositor_name;
   std::string acc_num;
   int balance;
public:
   Account(const std::string & depositor_name,
           const std::string & acc_num,
           int balance = 0);
   void show() const;
   bool deposit(int money);
   bool withdraw(int money);
};
#endif
