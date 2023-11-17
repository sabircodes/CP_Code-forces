#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;

        bool t_invalid = false;

    for(int i = 1  ;i < m ; i++){
        if(t[i]==t[i-1]){
            t_invalid = true;
        }
    }
    bool answer = true;

    for(int i = 0 ; i < n-1 ; i++){
        if(s[i]==s[i+1]){
            if(s[i]==t[0] || s[i+1]==t[m-1] || t_invalid == true ){
                answer = false;
                break;
            }
        }
    }
    if(answer == false ){
        cout<<"No";
        cout<<endl;
    }else{
        cout<<"Yes"<<endl;
    }

    }
     return 0;
}