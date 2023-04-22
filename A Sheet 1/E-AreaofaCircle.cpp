#include <iostream>
#include <iomanip>
using namespace std;
const double PI = 3.141592653;
#define endl '\n'

int main()
{
    
    double radius;
    cin >> radius;
    cout << fixed << setprecision(9) << PI * radius * radius << endl;
}
