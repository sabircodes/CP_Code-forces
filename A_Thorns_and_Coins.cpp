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
        string s ;
        cin>>s;
        int coin = 0 ;
        int i = 0 ;
        while(i<n){
             if(s[i]=='@'){
                coin++;
            }
            if(i< n-2 && s[i+1]=='*' && s[i+2]=='*'){
                break;
            }
           
            i++;
        }
        cout<<coin<<endl;
}
     return 0;
}