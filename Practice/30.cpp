#include <iostream>
#include <vector>
using namespace std;

int findEquilibrium(vector<int>& arr){
    int totalSum = 0, leftSum = 0;
    for(int num : arr) totalSum += num;
    
    for(size_t i=0; i<arr.size(); i++){
        totalSum -= arr[i];
        if(totalSum == leftSum) return i;
        leftSum += arr[i];
    }
    return -1;
}

int main(){
    cout << "Enter the length of the array: ";
    int n;
    cin >> n;
    
    // Handle invalid input
    if(n <= 0){
        cout << "Invalid array length!" << endl;
        return 1;
    }
    
    vector<int> arr1;
    cout << "Enter the elements in this array: ";
    
    for(int i = 0; i < n; ++i){
        int value;
        cin >> value;
        arr1.push_back(value);
    }
    
    int result = findEquilibrium(arr1);
    
    if(result != -1){
        cout << "The equilibrium element index is: " << result << endl;
        cout << "The equilibrium element value is: " << arr1[result] << endl;
    }else{
        cout << "Equilibrium element does not exist." << endl;
    }
    
    return 0;
}