#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
        int n ;
        cin>>n;
        vector<int>arr(n);
        long long int sum = 0 ;
        int count_one = 0;
        for(int i = 0  ; i < n ; i++){
            int x;
            cin>>x;
            if(x==1){
                count_one++;
            }
            sum+=x;
            arr.push_back(x);
        }

       
        if(sum-n >= count_one && n!=1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

     }
     return 0;
}