#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s = "abcdefghifjklmnopqrstuvwxyz";
        string temp = s.substr(0, k);
        string ans = "";
        // n = n - 1;
        while (n--) {
            ans += temp;
        }
        
        cout << ans << endl;
    }
    return 0;
}
