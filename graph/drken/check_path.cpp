#include <iostream>
#include <vector>
using namespace std;
using Graph = vector<vector<int> >;

// 深さ優先探索
vector<bool> seen;
void dfs(Graph &G, int v) {
    seen[v] = true;

    // v から行ける各頂点 next_v について
    for (auto next_v : G[v]) {
        if (seen[next_v]) continue;
        dfs(G, next_v);
    }
}

int main() {
    int N, M , s, t; cin >> N >> M >> s >> t;

    Graph G(N);
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }

    seen.assign(N, false);
    dfs(G, s);

    // t に辿り着けるかどうか
    if (seen[t]) cout << "Yes" << endl;
    else cout << "No" << endl;
}