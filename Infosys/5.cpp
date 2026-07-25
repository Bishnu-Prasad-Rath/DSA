// Two sum

#include <iostream>
#include <vector>
using namespace std;

int twosum(vector<int> sum, int n){

    int max;

     for(int i=0;i<sum.size();i++){
        for(int j = i+1;j<sum.size();j++){
            max = sum[i] + sum [j];
            if(max == n) return sum[i],sum[j];
        }
     }
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

    int result = twosum(sum,target);

    cout << "The result is : " << result << endl;

    return 0;
}