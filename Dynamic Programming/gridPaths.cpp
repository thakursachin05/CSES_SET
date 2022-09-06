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
ll n,m,x,y,k;


void solve(){ 
    cin>>n;
    vector<string> arr;
    rep(i,0,n){
        string s;
        cin>>s;
        arr.push_back(s);
    }
    
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    if(arr[n-1][n-1]=='.')
     dp[n-1][n-1] = 1;
    for(int i=n-1;i>=0;i--){
        for(int j = n-1;j>=0;j--){
            if(i==n-1 && j == n-1) continue;
            if(arr[i][j] == '*') dp[i][j] = 0;
            else{
                dp[i][j] = (dp[i+1][j]%mod + dp[i][j+1]%mod)%mod;
                dp[i][j] %= mod;
            }
        }
    }
    cout<<dp[0][0]%mod;
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
