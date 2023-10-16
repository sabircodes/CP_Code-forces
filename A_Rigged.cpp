#include<bits/stdc++.h>
using namespace std;
 int main(){
     int t;
     cin>>t;
     while(t--){
         int n ;
         cin>>n;
         int ans = 0;
         for(int i = 0 ; i < n ; i++){
             int s,e;
             cin>>s>>e;
             int p_s,p_e;
             if(i==0){
                  p_s = s;
                  p_e = e;
                 ans = s;
             }
             else {
                 if(s>=p_s && e>=p_e){
                     ans=-1;
                 }
             }
         }
         cout<<ans<<endl;
     }
     return 0;
 }