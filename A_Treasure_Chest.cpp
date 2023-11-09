#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        int chest , key , stamina;
        cin>>chest>>key>>stamina;
        if(chest > key ){
            cout<<chest<<endl;
        }
        else if(chest+stamina > key && key!=0){
            cout<<key<<endl;
        }
        
        else{
            int travel  = chest+stamina;
            int total = key - travel ;
            total = 2*total;

            travel = travel + total;
            cout<<travel<<endl;
        }

    }   
     return 0;
}