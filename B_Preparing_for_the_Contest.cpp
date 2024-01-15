#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        int n , k;
        cin>>n>>k;

        vector<int>ans;
        for(int i = n-k-1 ; i >= 0 ; i--){
            ans.push_back(i+1);
        }

        for(int i = n-k+1; i<=n ; i++){
            ans.push_back(i);
        }

        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }
     return 0;
}