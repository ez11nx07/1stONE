#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int> arr = {4,3,5,1,2};
  sort(arr.begin(),arr.end());
  cout<<arr[arr.size()-1];
  }
