#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
  int x,y;
  cin>>x>>y;
  int a = 0;
  int flag = 0;
  if(x%2!=0){
    a = (x-1)*(x-1);
    a += 1;
    flag = 1;
  }
  else a = x*x;
  int flag1 = 0;
  int b = 0;
  if(y%2==0){
    b = (y-1)*(y-1);
    b += 1;
    flag1 = 1;
  }
  else{
    b = y*y;
  }
    int ans  = 0;
  if(x > y){
    if(flag){
        ans = a + y-1;
        // cout<<"Row incr odd ";
    }
    else{
        ans = a - y + 1;
    }
  }
  else{
    if(flag1 || y==1){
        ans = b + x - 1;
    }
    else{
        ans = b - x +1;
    }
  }

  cout<<ans<<endl;

  
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  
  while(t--){
    solve();
  }
 
  return 0;
}
