#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        int n ;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        int count = 0 ;
        for(auto i : mp){
            int val = i.first-'A'+1;
            if(i.second >= val){
                count++;
            }
        }

        cout<<count<<endl;

            
    }
     return 0;
}