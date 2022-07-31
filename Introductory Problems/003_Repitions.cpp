#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve(){
  string s;
  cin>>s;
  int a=0,c=0,g=0,t=0;
  int result = 0;
  for(auto x : s){
    if(x=='A'){
        a++;
        c=0;
        g=0;
        t=0;
    }
    else if(x=='C') {
        c++;
        a=0;
        t=0;
        g=0;
    }
    else if(x=='G'){
        g++;
        a=0;
        c=0;
        t=0;
    } 
    else if(x=='T'){
        t++;
        a=0;
        g=0;
        c=0;
    } 
    result = max({result,a,c,g,t});
  }

    cout<<result<<endl;
  
}

int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
//   int t;
//   cin>>t;
  
  solve();
 
  return 0;
}
