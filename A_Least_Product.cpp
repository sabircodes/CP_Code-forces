#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int neg = 0;
        int zeroes = 0;
        int pro = 1;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            pro *= arr[i];
            if (arr[i] < 0) {
                neg++;
            } 
            if(arr[i] == 0) {
                zeroes++;
            }
        }
        
        
        if (zeroes || neg % 2) {
            cout << 0 << endl;
        }
       else {
            cout<<1<<endl;
            cout << 1<< " "<<0<<endl;
            continue;
        }
    }
    return 0;
}
