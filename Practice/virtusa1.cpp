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

bool canbe(ll n,ll x,ll st,ll k){
  if((n==0 || n<=x) && k>0) return true;
  if(k==1){
    if(n<=x) return true;
    if(n&(n-1)==0){
       ll pow = int(log2(n));
       if(pow&1) return true;
    }
    return false;
  }
  if(k==0 || n<0){
    return false;
  }
  ll pow = (int)log2(n);
  if(pow%2==0){
    pow--;
  }
  if((pow<=2 || pow>=k)&& n>x) return false;
  // cout<<n<<endl;
  return canbe(n-(1<<pow),x,k-1);
}


bool isOk(ll n,ll x,ll k){
  if(x==0 && n&1) return false;
  // if(x>0 && 2*k>=n ) return true; 
  return canbe(n,x,k);

}
  
ll solve(){ 
 ll n,x;
 cin>>n>>x;
 ll low = 1;
 ll high = 1e11;
 ll ans = -1;
 while(low<=high){
  ll mid = low + (high-low)/2;
  if(isOk(n,x,mid)){
    ans = mid;
    high = mid-1;
  }
  else low = mid+1;
 } 
 return ans;
}


int32_t main(){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

  
  ll t;
  cin>>t;
  while(t--){
    cout<<solve()<<endl;
  }
 
  return 0;
}
