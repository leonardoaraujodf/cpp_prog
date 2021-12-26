#include <iostream>

#include "account.h"

int main()
{
   Account acc1("Leonardo", "ackj-zz-5521");
   Account acc2("Josiane", "asdiq-1290", 1200);
   acc1.show();
   acc2.show();
   acc1.withdraw(200);
   acc1.show();
   acc1.deposit(200);
   acc1.show();
   acc1.withdraw(200);
   acc1.show();
   acc2.deposit(100);
   acc2.show();
   acc2.withdraw(1300);
   acc2.show();
   return 0;
}
