#include<iostream>
#include<bits/stdc++.h>

using namespace std;

double dis(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int px, py, ax, ay, bx, by;
        cin >> px >> py >> ax >> ay >> bx >> by;
        double res1 = max(dis(ax, ay, 0, 0), dis(ax, ay, px, py));
        double res2 = max(dis(bx, by, 0, 0), dis(bx, by, px, py));

        double res3 = max({ min(dis(px, py, ax, ay), dis(px, py, bx, by)), min(dis(0, 0, ax, ay), dis(0, 0, bx, by)), dis(ax, ay, bx, by) / 2 });
        double ans = min({res1, res2, res3});
        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}
