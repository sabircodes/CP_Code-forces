#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool move = true;
        while (move)
        {
            move = false;
            for (int i = 1; i < n - 1; i++)
            {
                
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
                {
                    move = true;
                    swap(arr[i], arr[i + 1]);
                }
            }
        }

        if (is_sorted(arr.begin(), arr.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
