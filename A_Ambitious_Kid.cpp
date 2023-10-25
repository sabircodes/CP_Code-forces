#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void helpme(){
    long long n;
    cin>>n;
    long long mini = INT_MAX;
    for(int i = 0; i < n; i++){
        long long x;
        cin>>x;
       
        if(x==0){
            mini = 0;
           break; 
        }
        mini = min(mini, abs(x));
        
    }
    cout<<mini<<endl;
}
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int t;
     t=1;
     while (t--)
     {
        helpme();
     }
     
     return 0;
}