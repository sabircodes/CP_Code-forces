#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        string s ,f;
        cin>>s;
        cin>>f;
        int c0 = 0 ;
        int c1 = 0;


        for(int i = 0; i < n; i++){
            if(s[i]!=f[i]){
                if(s[i]=='0'){
                    c0++;
                }
                else{
                    c1++;
                }
            }
        }
        if(c0 == c1){
            cout<<c0<<endl;
        }
        else if(c0 > c1){
            int val = c0;
            cout<<val<<endl;
        }
        else if(c1 > c0){
            int val = c1;
            cout<<val<<endl;
        }
        else if((c0==1 && c1 == 0 ) || (c1==1 && c0==0)){
            cout<<1<<endl;
        }
}
     return 0;
}