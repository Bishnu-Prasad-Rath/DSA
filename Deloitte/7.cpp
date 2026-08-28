// Even Sum Pair Formation
#include <iostream>
using namespace std;

int main(){

ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  if(!(cin>>n)) return 0;

  int even_count = 0;
  int odd_count = 0;

  for(int i=0; i<n; ++i){
    int num;
    cin>>num;
    if(num % 2 == 0){
      even_count++;
    } else{
      odd_count--;
    }
  }

  if(even_count % 2 == 0 && odd_count % 2 == 0){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  
  return 0;
}