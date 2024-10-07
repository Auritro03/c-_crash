// Write a program to calculate the area of a Circle.

#include <iostream>
#include <cmath>
using namespace std;

int main (){
 double radius;
cout<<"Enter radius ";
cin>> radius;
const double pi = 3.14;
double area = pi * pow(radius, 2);
cout<< area;
return 0; 
}