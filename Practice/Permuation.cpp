#include<bits/stdc++.h>
using namespace std;

void permute(int arr[],int n,vector<int> &ans,vector<bool> &vis){
    if(ans.size()==n){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
    
        }
    cout<<endl;
    return ;
    }

    for(int i=0;i<n;i++){
        if(vis[i]) continue;
        vis[i] = true;
        ans.push_back(arr[i]);
        permute(arr,n,ans,vis);
        ans.pop_back();
        vis[i] = false;
    }

}


int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> ans;
    vector<bool> vis(n,false);
    permute(arr,n,ans,vis);
}