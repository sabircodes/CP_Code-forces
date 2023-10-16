#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int ans = -1;
        for(int i = 0 ; i < m ; i++){
            if(x.find(s)!=-1){
                ans=i;
                break;
            }
            x+=x;
        }
        cout<<ans<<endl;
    }
    return 0;
}
