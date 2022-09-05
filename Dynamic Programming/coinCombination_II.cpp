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
    cin>>n>>x;
    vector<ll> arr(n);
    rep(i,0,n) cin>>arr[i];
  vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    dp[0][0] = 1;
    rep(i,1,n+1){
      rep(j,0,x+1){
        dp[i][j] = dp[i-1][j];
        int left = j-arr[i-1];
        if(left>=0){
          (dp[i][j] += dp[i][left]) %= mod;
        }
      }
    }
    cout<<dp[n][x]<<'\n';
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
