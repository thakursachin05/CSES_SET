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


  
void solve(){ 
    cin>>n>>x;
    vector<int> pr(n),pa(n);
    rep(i,0,n) cin>>pr[i];
    rep(i,0,n) cin>>pa[i];
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    rep(i,1,n+1){
        rep(j,0,x+1){
            dp[i][j] = dp[i-1][j];
            int left = j - pr[i-1];
            if(left >= 0){
                dp[i][j] =  max(dp[i][j],pa[i-1]+dp[i-1][left]);
            }
        }
    }
    cout<<dp[n][x];
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
