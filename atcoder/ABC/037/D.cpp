#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(n);i++)

const int MOD = 1e9 + 7;
const int INF = 1e9;

int dy[] = {1, 0, -1, 0};
int dx[] = {0, 1, 0, -1};

ll dp[1005][1005];
int a[1010][1010];
int H, W;

ll dfs(int y, int x){
    if(dp[y][x] != -1) return dp[y][x];
    ll ret = 1;
    rep(i, 4){
        int ny = y + dy[i], nx = x + dx[i];
        if(!(0 <= ny && ny < H && 0 <= nx && nx < W)) continue;
        if(a[y][x] < a[ny][nx]){
            ret += dfs(ny, nx);
            ret %= MOD;
        }
    }
    return dp[y][x] = ret;
}

int main() {
    cin >> H >> W;
    rep(i, H)rep(j, W) cin >> a[i][j];
    rep(i, H)rep(j, W) dp[i][j] = -1;
    ll ans = 0;
    rep(i, H)rep(j, W) ans += dfs(i, j), ans %= MOD;
    cout << ans << endl;
    return 0;
}