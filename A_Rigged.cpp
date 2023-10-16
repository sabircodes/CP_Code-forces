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
          // ye p ki strength and endurance
             int p_s,p_e;
          // is step pe we have assumed ki p apni strength k equal weight utha  hi lega isliye ussey amswer declare krdia hai 
             if(i==0){
                  p_s = s;
                  p_e = e;
                 ans = s;
             }
             else {
              // and in this part if we encounter some with greater or same strength && endurance that means ki p kabhi jeet nahi payega to ans=-1 krdia 
                 if(s>=p_s && e>=p_e){
                     ans=-1;
                 }
             }
         }
         cout<<ans<<endl;
     }
     return 0;
 }
