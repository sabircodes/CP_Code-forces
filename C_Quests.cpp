#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n], b[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        int ans = INT_MIN;
        int count = 0;
        int maxb = INT_MIN;
        int sum = 0;

        for(int i = 0; i < n; i++){
            maxb = max(maxb, b[i]);
            count++;
            int val = k - count;
            sum += a[i];
            ans = max(ans, sum + val * maxb);

            if(count == k){
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
