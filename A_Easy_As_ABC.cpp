#include<bits/stdc++.h>


#define vvc vector<vector<char>>
#define vvb vector<vector<bool>>
#define vc  vector<char>
#define vb  vector<bool>



using namespace std;

const int N = 4;

int n = 3;
vvc grid(n, vc(n));
string ans = "CCC";
vvb vis(n, vb(n, false));

bool isvalid(int xx , int yy ){
  return xx >= 0 && xx < n && yy >= 0 && yy < n;
}


void dfs(int x, int y, string cur) {
    if (cur.size() == 3) {
        ans = min(ans, cur);
        return;
    }

    vis[x][y] = true;
    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    cur += grid[x][y];
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i], ny = y + dy[i];

        if ( isvalid(nx,ny) && !vis[nx][ny]) dfs(nx, ny, cur);
    }
    vis[x][y] = false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> grid[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dfs(i, j, "");

    cout << ans;

    return 0;
}
