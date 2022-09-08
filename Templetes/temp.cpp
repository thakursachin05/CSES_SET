#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define first F
#define second S
// #define push_back PB
#define make_pair MP
#define rep(i,a,b) for(int i=a;i<b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define mod 1000000007
ll n,m,x,y,k;

ll powEx(ll x,ll y){
    x %= mod;
    ll ans = 1;
    while(y > 0){
        if(y&1){
            (ans *= x)%=mod;
        }
        y = y>>1;
        (x *= x)%=mod;
    }
    return ans;
}

  
void solve(){ 

}


int32_t main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

  bool flag = 1;
  ll t = 1;
  if(flag)
    cin>>t;

  while(t--){
    solve();
  }

 
  return 0;
}
