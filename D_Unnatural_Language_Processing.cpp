#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;  // Corrected this line
        string temp;
        for(int i = 0 ; i < n ; i++) {
            if(s[i]=='a' || s[i]=='e'){
                temp+='V';
            }
            else {
                temp+='C';
            }
        }

        int i = 0 ; 
        string ans = "";
        string sub = "";

        while(i < n) {
            sub += s[i];
            if (sub.size() == 2) {
                ans += sub;
                sub = "";
                if (temp[i + 2] == 'C' && i < n - 3) {
                    ans += s[i + 1];
                    i++;
                }
                ans += '.';
            }
            i++;
        }
        
        if (ans.back() == '.') {
            ans.pop_back();
        }
        if (sub.size() > 0) {
            ans += sub;
        }
        cout << ans << endl;
    }

    return 0;
}
