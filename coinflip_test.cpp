#include <iostream>
#include <cstdlib>
using namespace std;

int coinflip()
{
    int coin = rand();
    int result = coin % 2;
    return result;
}

double multiplecoin(int n)
{
    double prob;
    int results = 0;
    for (int i = 0; i < n; i++)
    {
        results += coinflip();
    }
    prob = double(results) / double(n);
    return prob;
}

void doitall()
{
    int num;
    cout << "Please enter number of trials:" << endl;
    cin >> num;
    cout << "The probaility is " << multiplecoin(num) << endl;
}

int main()
{
    // Dumb Version
    int coinflip1 = rand();
    int coinflip2 = rand();
    int result1 = coinflip1 % 2;
    int result2 = coinflip2 % 2;
    cout << "the result is" << result1 << " other one is " << result2 << endl;

    // Good Version
    int coin = 0;
    int result = 0;
    int times = 0;
    int num_of_up = 0;
    double prob;
    cout << "Please enter number of trials:" << endl;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        coin = rand();
        result = coin % 2;
        num_of_up += result;
    }
    prob = double(num_of_up) / double(times);
    cout << "The probability is " << prob << endl;

    // Even better version
    int num;
    cout << "Please enter number of trials:" << endl;
    cin >> num;
    cout << "The probaility is " << multiplecoin(num) << endl;

    // Perfect Version
    doitall();

    return 0;
}
