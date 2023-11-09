#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        
        int n ;
        cin>>n;
        int twice = 2*n;
        vector<int>arr(twice);
        for(int i=0; i<twice; i++){
            cin>>arr[i];
        }
        sort(arr.begin(), arr.end());


        int result=0;
    for(int i=0;i<n-1;i++){
        result+=arr[i+1]-arr[i];
        result+=arr[n+i+1]-arr[n+i];
    }
    

        int i = 0 ;
        int j = (2*n)-1;

        vector<pair<int,int>>ans;
        while(i<=j){
            ans.push_back({arr[j],arr[i]});
            i++;
            j--;

        }
        cout<<result<<endl;
        for(auto i : ans){
            cout<<i.first<<" "<<i.second<<endl;
        }


    }   
     return 0;
}