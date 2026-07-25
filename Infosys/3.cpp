// Fibonacci number
#include <iostream>
using namespace std;

int fib(int n)
{

    // Base-case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int current;

    int prev2 = 0;
    int prev1 = 1;

    for (int i = 2; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return prev1;
}

int main()
{

    cout << "Enter the no. : " << endl;

    int n;

    cin >> n;

    int result = fib(n);

    cout << "The result is : " << result << endl;

    return 0;
}