#include <iostream>
using namespace std;

int main()
{
    double farrenheit;
    double celsius;
    cout << "Please enter Celsius:" << endl;
    cin >> celsius;
    farrenheit = celsius * (9.0/5.0) + 32;
    cout << "Farrenheit is " << farrenheit << endl;
    return 0;
}