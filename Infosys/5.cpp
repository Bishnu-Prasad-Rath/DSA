// Two sum

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

pair<int,int> twosum(const vector<int>& sum, int n){

    int max;

     for(int i=0;i<sum.size();i++){
        for(int j = i+1;j<sum.size();j++){
            max = sum[i] + sum [j];
            if(max == n) return {sum[i],sum[j]};
        }
     }
     return{-1,-1};
}

int main(){

    int n;

    cout << "Enter the size of the vector : " << endl;

    cin>>n;

    vector<int> sum(n);    

    cout << "Enter the elements of the vector : " << endl;

    for(int i=0;i<n;i++){
        cin >> sum[i];
    }

    cout<<endl;

    cout << "Enter the targeted value : " << endl;

    int target;

    cin>>target;

    auto [first, second] = twosum(sum, target);

    cout << "The result is : " << first  << "and" <<  second << endl;

    return 0;
}