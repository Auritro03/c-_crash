//pass by value
#include <iostream>
using namespace std;

void ss(string name){
name[0] = 'A';
cout << name << endl;


}
int main()
{   string name = "Oritro";
   ss(name);
    cout << name << endl;
    return 0;

}