#include <iostream>

using namespace std;

double get_time_weekend(int amount){
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

double get_time_weekday(int amount){
   return (amount * 2) / 5;
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

      char is_weekday = 0;
      while ( is_weekday != '1' && is_weekday != '0'){
         cout << "Is today a weekday (1) or weekend (0) ?" << endl;
         cin >> is_weekday;
      }

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
      double time;
      if (is_weekday) {
         time = get_time_weekday(amount);
      } else {
         time = get_time_weekend(amount);
      }
      cout << "Time: " << time << endl;
   }

   return 0;
}
