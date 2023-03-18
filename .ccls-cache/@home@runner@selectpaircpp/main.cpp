#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin>>n>>m;
  int arr[n];
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
  for(int i = 0; i<n; i++){
    for(int j = n; j>0; j--){
      if(arr[i]+arr[j] == m){
        cout<<i+1<<" "<<j+1<<endl;
        // cout<<arr[0]<<" "<<arr[j]<<" ";
        // cout<<arr[7];
        return 0;
      }
    }
  }
  
}

/*
8 12
11 4 5 6 7 9 10 1
*/