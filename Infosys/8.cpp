// Best time to buy and sell stock

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int maxProfit(vector<int> &prices)
{

    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices)
    {
        if (price < minPrice)
        {
            minPrice = price;
        }
        else if (price - minPrice > maxProfit)
        {
            maxProfit = price - minPrice;
        }
    }

    return maxProfit;
}

int main()
{

    cout << "Enter the prices length : " << endl;

    int n;

    cin >> n;

    vector<int> v(n);

    cout << "Enter the price in prices : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int result = maxProfit(v);

    cout << "The max profit of this prices is : "<< result << endl;

    return 0;
}