#include<bits/stdc++.h>
using namespace std;
  
void solve(){ 
  int x;
  cin>>x;
  vector<int> arr1(x);
  vector<int> arr2(x);
  for(int i=0;i<x;i++){
    cin>>arr1[i];
  }
  
  arr2 = arr1;
    reverse(arr2.begin(),arr2.end());
    vector<int> res;

    int carry = 0;
    for (int i=0; i<x; i++)
    {
       
        int sum = (arr1[i]+arr2[i]+carry);
        res.push_back(sum%10);

        carry = sum/10;
    }
 
    
 
    if (carry)
        res.push_back(carry);
 
  
    reverse(res.begin(), res.end());
 
    for(auto it : res){
        cout<<it<<" ";
    }

}


int main(){
    solve();
  return 0;
}
