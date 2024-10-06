// Write a program to convert temperature from fahrenheit into celsius.


#include <iostream>
using namespace std;

int main () {
  
   
   cout<< "Fahrenheit ";
   int far;
   cin>> far;

   double cel = (far - 32)/ 1.8;
   cout<< cel;
   
    return 0;
}