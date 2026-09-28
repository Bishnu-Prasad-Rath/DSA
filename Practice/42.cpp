#include <iostream>
#include <vector>
#include <utility>   // for std::pair
using namespace std;

pair<int,int> twoSum(vector<int>& arr, int target){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){   // fixed: semicolon + start at i+1
            if(arr[i] + arr[j] == target){
                return {arr[i], arr[j]};
            }
        }
    }
    return {-1, -1};   // sentinel if no pair found
}

int main(){
    int n;
    cout << "Enter the length of the array" << endl;
    cin >> n;

    vector<int> arr;
    cout << "Enter the elements of the array : " << endl;
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        arr.push_back(value);
    }

    cout << "Enter the targeted value" << endl;
    int target;
    cin >> target;

    pair<int,int> result = twoSum(arr, target);

    if(result.first == -1 && result.second == -1){
        cout << "No two values sum to " << target << endl;
    } else {
        cout << "The two values are : " 
             << result.first << " and " << result.second << endl;
    }

    return 0;
}