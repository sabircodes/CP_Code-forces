#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
   string s;
    bool fg= false;
    cin>>s;
    int t_l=0;
    int t_o=0;
    int l=0;
    int o=0;
    for(auto x:s){
        if(x=='L')t_l++;
        else t_o++;
    }
    // cout<<t_l<<" "<<t_o<<endl;
    for(int i =0;i<s.length()-1;i++){
        if(s[i]=='L'){
            l++;
        }
        else{
            o++;
        }
        // cout<<l<<" "<<o<<endl;
        if(l != t_l-l && o!=t_o-o){
            cout<<(i+1)<<endl;
            fg =true;
            break;
        }
    }
    if(!fg)cout<<-1<<endl;

    return 0;
}