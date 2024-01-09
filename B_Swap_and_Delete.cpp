#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int c1 = 0;
        int c2 = 0;
        int ans = 0;
        for (auto i : s) {
            if (i == '1') {
                c1++;
            } else {
                c2++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (c1 > 0 && s[i] == '0') {
                c1--;
            } else if (c2 > 0 && s[i] == '1') {
                c2--;
            } else {
                ans = n - i;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
