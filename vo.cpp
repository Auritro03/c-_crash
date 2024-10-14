#include <iostream>
using namespace std;

void parameter (string name)
{
    cout << "Hey dude " << name << endl;
}
int main (){
    string name;
    cin>> name;
 parameter(name);
 string name2;
    cin>> name2;
 parameter(name2);
 return 0;

}