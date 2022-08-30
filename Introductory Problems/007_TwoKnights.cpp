#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define first F
#define second S
#define push_back PB
#define make_pair MP
#define rep(i,a,b) for(int i=a;i<b;i++)
#define mod 1000000007



  
void solve(ll n){
    cout<<((n*n)*(n*n-1))/2ll - 4ll*((n-2)*(n-1))<<endl;
}


int32_t main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

  
  int t;
  cin>>t;
  for(ll i=1;i<=t;i++)
    solve(i);
 
  return 0;
}
