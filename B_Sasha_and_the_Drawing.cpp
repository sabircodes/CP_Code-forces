#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        int n,k;
        cin>>n>>k;

        int ans = 0 ;
        int diagonal =(n*4)-2;
        if(k%2==0){
            ans = k/2;
        }
        else{
            ans = (k+1)/2 ;

        }
        if(k == diagonal){
            ans+=1;
        }

        cout<<ans<<endl;
}
     return 0;
}