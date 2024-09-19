#include <iostream>

int evenFibo(int n)
{
    int a = 1;
    int b = 2;
    int c = 1;
    int sum = 0;
    for (int i = 0; a <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (a % 2 == 0)
        {
            sum += a;
        }
    }
    return sum;
}

int main()
{
    std::cout << evenFibo(4000000);
}