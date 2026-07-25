//Climb stairs problem 

#include <iostream>
using namespace std;

int climbstairs(int n)
{
    // Base cases
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    int prev2 = 1;
    int prev1 = 2;

    for (int i = 3; i <= n; i++)
    {
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    return prev1;
}

int main()
{

    cout << "Enter ur steps : " << endl;

    int n;

    cin >> n;

    int result = climbstairs(n);

    cout << "The no. of stairs u have to climb to reach ur destiny is : " << result << endl;

    return 0;
}