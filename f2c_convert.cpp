#include <iostream>
using namespace std;

int main()
{
    //Variable initialize
    double farrenheit;
    double celsius;

    //Inputting
    cout << "Please enter Celsius:" << endl;
    cin >> celsius;

    //Formula
    farrenheit = celsius * (9.0/5.0) + 32;

    //Output
    cout << "Farrenheit is " << farrenheit << endl;
    return 0;
}