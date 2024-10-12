#include<iostream>
using namespace std;

int main()
{
    int day;
    cout << "Write the day number : ";
    cin >> day;

    switch (day)
    {
        case 1:
        cout << "Saturday ";

        case 2:
        cout << "Sunday ";
        
        case 3:
        cout << "Monday ";
        
        case 4:
        cout << "Tuesday ";
        
        case 5:
        cout << "Wednesday ";
        
        case 6:
        cout << "Thursday ";
        
        case 7:
        cout << "Friday ";
         default: break;


    }
    return 0;

}