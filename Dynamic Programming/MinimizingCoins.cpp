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

const ll inf = 1e17;
ll n,x,y,k;
vector<ll> arr;
vector<ll> dp;


void solve(){ 
    cin>>n>>x;
    arr.resize(n);
    dp.resize(x+1,inf);
    rep(i,0,n) cin>>arr[i];
    dp[0] = 0;
    rep(i,0,x+1){
        rep(j,0,n){
          if(i-arr[j] >=0){
            dp[i] = min(dp[i],1+dp[i-arr[j]]);
          }
        }
    }
    if(dp[x]==inf) cout<<-1<<endl;
    else cout<<dp[x]<<'\n';
}


int32_t main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

  bool flag = 0;
  ll t = 1;
  if(flag)
    cin>>t;
    
  while(t--){
    solve();
  }

  return 0;
}
