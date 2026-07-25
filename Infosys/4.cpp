// Maximum sub-array  (Kadane's algorithm)

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int maxi = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];

        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }
    return maxi;
}

int main()
{

    int n;

    cout << "Enter the size of the vector : " << endl;

    cin >> n;

    vector<int> v(n);

    cout << "Enter the elements of the vector : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    cout << "The elements are in this vector : " << endl;

    for (const auto &elem : v)
    {
        cout << elem << endl;
    }

    cout << endl;

    int result = maxSubArray(v);

    cout << "The result of the max sub-array is : " << result << endl;

    return 0;
}