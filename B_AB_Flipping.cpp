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
            string S;
            cin>>S;
            int ca = -1;
            int cb = -1;

            for(int i = 0 ; i < n; i++){
                if( S[i]=='A' && ca==-1){
                    ca = i;
                    break;
                }
            }

            for(int i = n-1 ; i >= 0 ; i -- ){
                if(S[i]=='B' && cb == -1 ){
                    cb = i;
                    break;
                }
            }

            // if first A u enocunter is found after the last B then swap won't happen
            if(ca > cb){
                cout<<0<<endl;
            }
            // if either A or B is not there then return 0
            else if(ca == -1 || cb == -1 ){
                cout<<0<<endl;
            }
            else {
                 cout<< (cb - ca) << endl;
            }


}
     return 0;
}