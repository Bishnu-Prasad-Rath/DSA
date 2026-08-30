//Moving elements one by one takes $O(N \times K)$ time, which will fail hidden test cases. Instead, use a three-step reversal to achieve $O(N)$ time and $O(1)$ space. First, handle cases
//where $K$ is larger than the array size by using $K = K \% N$. Then:
//Reverse the entire array.
//Reverse the first $K$ elements.
//Reverse the remaining $N-K$ elements.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void rotateArray(vector<int> & arr, int k){
    int n = arr.size();
    
    // Handle cases where k is larger than array size
    k = k % n;
    
    // Three-step reversal
    reverse(arr.begin(), arr.end());           // Reverse entire array
    reverse(arr.begin(), arr.begin() + k);     // Reverse first k elements
    reverse(arr.begin() + k, arr.end());       // Reverse remaining n-k elements
}

int main(){
    cout << "Enter the size of the array : ";
    
    int n;
    cin >> n;
    
    cout << "Enter the elements of the array : " << endl;
    
    vector<int> arr1;
    
    for(int i = 0; i < n; i++){
        int e;
        cin >> e;
        arr1.push_back(e);
    }
    
    cout << "Enter the number of rotations (k) : ";
    
    int k;
    cin >> k;
    
    // Call the rotation function
    rotateArray(arr1, k);
    
    // Print the rotated array
    cout << "The result is : ";
    for(int i = 0; i < arr1.size(); i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    return 0;
}