#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> vec;

        while (n--) {
            int index, time;
            cin >> index >> time;
            vec.push_back({index, time});
        }

        int mini = INT_MAX; 
        for (int i = 0; i < vec.size(); i++) {
            int range = (vec[i].second-1) / 2;
            int validrange = (vec[i].first) + range;

            mini = min(mini, validrange);
        }

        cout << mini << endl;
    }
    return 0;
}
