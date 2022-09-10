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

ll dp[8][8][49];

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

long f(int r,int c,int i,string s){
  // cout<<r<<" "<<c<<endl;
  if(r>6 || c>6 || r<0 || c<0 || i>s.size()) return 0;
  if(r==6 && c==0 && i==s.size()) return 1;
  if(r==6 && c==0 ) return 0;

  if(dp[r][c][i]!=-1) return dp[r][c][i];

  if(s[i]=='D') return dp[r][c][i] =  f(r+1,c,i+1,s);
  else if(s[i]=='R') return dp[r][c][i] =  f(r,c+1,i+1,s);
  else if(s[i]=='L') return dp[r][c][i] =  f(r,c-1,i+1,s);
  else if(s[i]=='U') return dp[r][c][i] =  f(r-1,c,i+1,s);
  
    
  return dp[r][c][i] =  f(r+1,c,i+1,s) + f(r-1,c,i+1,s) + f(r,c-1,i+1,s) +f(r,c+1,i+1,s);

}
  
void solve(){ 
  memset(dp,-1,sizeof(dp));
  string s;
  cin>>s;
  cout<<f(0,0,0,s)<<endl;
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
