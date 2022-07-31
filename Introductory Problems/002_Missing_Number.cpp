#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
    
    long long n;
    cin>>n;
    int arr[n];
    long long sum = 0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
        sum += arr[i];
    }

    long long actualSum = (n*(n+1))/2;
    cout<<actualSum-sum<<endl;
  
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  
  solve();
 
  return 0;
}
