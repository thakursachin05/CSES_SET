#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    
    int n;
    cin>>n;
    int arr[n];
    long long diff = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minEle = arr[0];
    for(int i=1;i<n;i++){

        if(arr[i]<minEle){
            diff += minEle-arr[i];
            arr[i] = minEle;
        }
        minEle = arr[i];

    }
    cout<<diff<<endl;
  
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  
  solve();
 
  return 0;
}
