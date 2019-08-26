#include <iostream>

using namespace std;

double get_time(int amount){
   double time = 0;
   if (amount < 150){
      time = (amount * 2) / 5;
   } else if (amount < 350 && amount >= 150){
      time = (amount - 150) * (3/10) + 60;
   } else if (amount >= 350) {
      time = (amount - 350) / 5 + 120;
   }
   return time;
}

int get_amount(int n, int d, int q){
   return 5*n + 10*d + 25*q;
}

int main()
{
   int q;
   int d;
   int n;

   while(1){
      cout << "Number of nickels: " << endl;
      cin >> n;

      cout << "Number of dimes: " << endl;
      cin >> d;

      cout << "Number of quarters: " << endl;
      cin >> q;

      char input = 0;
      while ( input != 'p' && input != 'c') {
         cout << "Print (p) or Cancel (c)?" << endl;
         cin >> input;
      }

      if (input == 'c'){
         return 0;
      }

      int amount = get_amount(n, d, q);
      double time = get_time(amount);
      cout << time << endl;
   }

   return 0;
}
