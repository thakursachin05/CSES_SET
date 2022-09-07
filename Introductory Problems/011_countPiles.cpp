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
    cin>>x>>y;
    if((x+y)%3==0){
        cout<<"YES"<<'\n';
    }
    else cout<<"NO"<<'\n';
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
