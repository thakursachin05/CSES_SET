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
map<pair<string,string>,ll> mp;

ll f(ll i,string prev,ll n,string curr,string &s,ll a[]){
    if(i==n) return 0;
    ll ans = 0;
    if(mp.find({prev,curr})!=mp.end()) return mp[{prev,curr}];
    if(curr>=prev){
        ans = max({ans,f(i+1,prev,n,curr+s[i],s,a),a[curr.size()]+f(i+1,curr,n,"",s,a)});
    }
    ans = max({ans,f(i+1,prev,n,"",s,a),f(i+1,curr,n,"",s,a)});
    return mp[{prev,curr}] = ans;
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
