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
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        
        }

        vector<int>temp =arr;

        sort(arr.begin(), arr.end());

        for(int i =1; i < n -1 ; i++){
            if(temp[i]>temp[i-1] && temp[i]>temp[i+1]){
                swap(temp[i],temp[i+1]);
            }
        }
        if(temp == arr){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
     return 0;
}