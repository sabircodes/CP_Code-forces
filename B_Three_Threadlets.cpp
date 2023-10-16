#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;cin>>t;
    while(t--){
        int a[3];
        for(int i = 0 ; i < 3 ; i++){
            cin>>a[i];
        }
        sort(a,a+3);
        if(a[0]==a[2]){
            cout<<"YES"<<endl;
        }
        else if(a[0]==a[1]){
            if(a[0]*2==a[2] || a[0]*3 == a[2] || a[0]*4 == a[2]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

        else{
            if(a[0]*2==a[1] && a[0]*2==a[2] || a[0]*2==a[1] && a[0]*3==a[3]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }












        // another solution
        // for(int i = 0 ;  i< 3 ; i++){
        //     cin>>a[i];
        // }
        // sort(a,a+3);
        // if(a[0]==a[1] && a[1]==a[2]){
        //     cout<<"YES"<<endl;
        // }
        // else if(a[1]%a[0] == 0 && a[2]%a[0]==0 && ((a[1]/a[0])-2 +(a[2]/a[0]))<=3 ){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }

    }
    return 0;
}