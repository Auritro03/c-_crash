//pass by refference

#include <iostream>
using namespace std;

void s(string &name){

    name[0] = 'A';
    cout << name << endl;


}
int main()
{ string name = "Oritro";
    s(name);
    cout << name;
    return 0;
}