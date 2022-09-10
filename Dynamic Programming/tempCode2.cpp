#include<bits/stdc++.h>
using namespace std;


void solve(){ 
  int x;
  cin>>x;
  int arr[x];
  int arr1[x];
  for(int i=0;i<x;i++){
    cin>>arr[i];
  }
  unordered_map<int,int> mp;
  for(int i=0;i<x;i++){
    cin>>arr1[i];
    mp[arr1[i]] = i;
  }
  

    int target;
    cin>>target;
    int start = -1,end = -1;
    
    for(int i=0;i<x;i++){
        int val = arr[i] + target;
        if(mp.find(val)!=mp.end()){
            start = i;
            end = mp[val];
        }
    
    }
    cout<<start<<" "<<end;
}


int32_t main(){

  
    solve();

 
  return 0;
}
