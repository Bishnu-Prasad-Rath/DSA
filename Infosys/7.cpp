// Majority Elements

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{

    int count = 0;
    int candidate = 0;

    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
        }

        if (num == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return candidate;
}

int main()
{
    cout << "Enter ur vector size : " << endl;

    int n;

    cin >> n;

    vector<int> v(n);

    cout << "Enter the elements of the vector : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int result = majorityElement(v);

    cout << "The max no. of element appeared from this vector is : " << result << endl;

    return 0;
}