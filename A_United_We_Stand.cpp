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
       
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
      

        sort(arr.begin(), arr.end());
        vector<int>b;
        vector<int>c;

        int maxi = arr[n-1];
        c.push_back(maxi);
        arr.pop_back();
            int i = n-2;
            while(arr[i]==maxi){
                c.push_back(arr[i]);
                arr.pop_back();
                i--;
            }

        for(int i=0;i<arr.size();i++){
            b.push_back(arr[i]);

        }
      
      if(c.size()==0||b.size()==0){
        cout<<-1<<endl; 
        continue;
      }

    //   output part

        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto i : b){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto i : c){
            cout<<i<<" ";
        }
        cout<<endl;

     }
     return 0;
}