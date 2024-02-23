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
        int sum = 0 ;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        int target = (int)sum/n;

        int val = 0 ;
        bool possible = true;

        if(arr[0] < target){
            possible = false;
        }

        for(int i=0;i<n && possible;i++){
            if(arr[i] > target){
                val += arr[i] - target;
            } else if(arr[i] < target){
                if(val < target - arr[i]){
                    possible = false;
                    break;
                } else {
                    val -= target - arr[i];
                }
            }
        }

        if(val == 0 && possible){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
