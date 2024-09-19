#include <iostream>
using namespace std;

bool isPrime(int n);

int main()
{
    int num = 10001;
    int term = 0;
    int result = 0;
    for (int i = 2; term < num; i++)
    {
        if (isPrime(i))
        {
            term++;
            result = i;
        }
    }
    cout << result << endl;
}

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}