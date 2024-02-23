#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool inRange(int i , int n , int m ){
    if(i>=n && i<=m)return true;
    return false;
}



int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     int t;
     cin>>t;
     while(t--){
        int n , m , k;
        cin>>n>>m>>k;
        vector<int>a(n);
        vector<int>b(m);
        set<int>s1,s2,s3;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }

        for(auto i : a){
            if(inRange(i,1,k)){
                s1.insert(i);
                s3.insert(i);
            }
        
        }
        for(auto i : b){
            if(inRange(i,1,k)){
                s2.insert(i);
                s3.insert(i);
            }
        
        }




        int val = k/2;


        if(s3.size() == k && s1.size() >=val && s2.size()>=val){
            cout<<"YES";
        }
        else cout<<"NO";
        cout<<endl;
        

}
     return 0;
}
