#include <iostream>

int main()
{
    long long num = 600851475143;
    long long div = 2;
    long long max = 0;

    while (num != 1)
    {
        if (num % div == 0)
        {
            max = div;
            num /= div;
        }
        else
        {
            div++;
        }
    }
    std::cout << max;
    return 0;
}
