#include <iostream>
#include <cmath>
using namespace std;

int max(int a, int b); 

int main()
{
    int x, y;
    cin >> x >> y;
    int mx = 1 + max(x,y);
    cout << mx << endl;
    cout << max(0,x) << endl;
    /*
    int x;
    double val;
    cout << "Enter a pos. #" << endl;
    cin >> val;
    if( val >= 0) {
        double res = sqrt(x);
        cout << "Result=" << res << endl;
    }
    else {
        cout << "Error!" << endl;
    }
    */    
}

int max(int a, int b)
{
    if(a > b)
        return a;
    else 
        return b;
}