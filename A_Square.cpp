#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        // Check if the sides are horizontal or vertical
        if (y1 == y2) {
            // Sides are horizontal
            int side_length = abs(x1 - x2);
            cout << side_length * side_length << endl;
        } else if (y1 == y3) {
            // Sides are horizontal
            int side_length = abs(x1 - x3);
            cout << side_length * side_length << endl;
        } else if (y1 == y4) {
            // Sides are horizontal
            int side_length = abs(x1 - x4);
            cout << side_length * side_length << endl;
        } else {
            // Sides are vertical
            int side_length = abs(y1 - y3);
            cout << side_length * side_length << endl;
        }
    }

    return 0;
}
