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
ll n,x,y,k;


ll f(ll curr,ll n,vector<ll> &dp){
  if(curr==n) return 1;
  if(curr >= n) return 0;
  if(dp[curr]!=-1) return dp[curr];
  ll ways = 0;
  rep(i,1,7){
    ways = (ways%mod + f(curr+i,n,dp)%mod)%mod;
  }
  return dp[curr] = ways%mod;
}
  
void solve(){ 
 cin>>n;
 vector<ll> dp(n+10,-1);
 cout<<f(0,n,dp);
}


int32_t main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

  bool flag = 1;
  // ll t;
  // cin>>t;
  // while(t--){
  //   cout<<solve()<<endl;
  // }
  solve();
 
  return 0;
}
