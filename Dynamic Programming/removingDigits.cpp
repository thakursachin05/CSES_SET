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


void solve(){ 
    cin>>n;
    vector<ll> dp(n+1,1e9);
    dp[0] =  0;
    rep(i,0,n+1){
       for(char c : to_string(i)){
        dp[i] = min(dp[i],dp[i-(c-'0')]+1);
       }
    }
    cout<<dp[n]<<'\n';
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
