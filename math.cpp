// Suppose your organization earn 80,000 taka per year. You have to pay state tax 4% and county tax 2% on your income. Now count the total tax.


#include <iostream>
using namespace std;

int main() {

double earn = 80000;


double st_taxR = .04;
double st_tax = earn * st_taxR;


double ct_taxR = .02;
double ct_tax = earn * ct_taxR;

cout << earn << endl;
cout << st_tax << endl;
cout << ct_tax;

return 0;
}