#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
  int n;
  cin>>n;
  int arr[n];
  int count1=1;
  int count2 = (n/2) + 1;

  for(int i=0;i<n;i++){
    if(i%2==0)
        arr[i] = count2++;
    else{
        arr[i] = count1++;
    }
  }
  if(n==3 || n==2) cout<<"NO SOLUTION";
  else{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  }

  
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//   int t;
//   cin>>t;
  
  solve();
 
  return 0;
}
