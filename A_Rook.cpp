#include<iostream>
#include<bits/stdc++.h>
#define vc vector<string>

using namespace std;
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        string s;
        cin>>s;
        vc chars = {"a","b","c","d","e","f","g","h"};
        vc ans ;
         for(int i = 0; i <8 ; i++){
            string val = chars[i]+s[1];
            if(val == s){
                continue;
            }
            else{
                ans.push_back(val);
            }
            
        }
        for(int i = 1; i <= 8 ; i ++){
            string val  = s[0] + to_string(i);
            if(val == s){
                continue;
            }
            else
            ans.push_back(val);
        }
       

        for(auto i : ans){
            cout<<i<<endl;
        }
        

    }
     return 0;
}