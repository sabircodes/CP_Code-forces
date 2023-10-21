#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        string temp;
        cin>>temp;

        if(temp[0]=='a' && temp[1]=='c' || temp[0]=='a'&&temp[1]=='b' || temp[0]=='b'&&temp[1]=='a' || temp[0]=='c'&&temp[1]=='b'){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;




     }
     return 0;
}