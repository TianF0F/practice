#include <iostream>
#include <cmath>
using namespace std;

bool CheckLogin(string exp_pwd);

int main()
{
    string pass = "Open123!";
    bool valid;

    valid = CheckLogin(pass);
    if (valid == true)
    {
        cout << "success!" << endl;
    }
    else
    {
        cout << "password unmatched" << endl;
    }
    return 0;
}

bool CheckLogin(string exp_pwd)
{
    string pwd;
    cout << "Enter your password: " << endl;
    cin >> pwd;
    return pwd == exp_pwd;
}