#include<bits/stdc++.h>
using namespace std;

const int N = 200'001;
int n, ans[N], d[N], md[N], ef[N << 2], pf[N];

void dfs1(int c, int p, int v) {
    d[c] = v;
    int mx = 0;
    for (int u = pf[c]; u; u = ef[u + 1]) if (ef[u] != p) {
        dfs1(ef[u], c, v + 1);
        mx = max(mx, md[ef[u]]);
    }
    md[c] = mx + 1;
}
void dfs2(int c, int p, int v) {
    ans[c] = v;
    if (pf[c] == 0) {
        return;
    }
    int mx1 = -1, mx2 = -1;
    for (int u = pf[c]; u; u = ef[u + 1]) if (ef[u] != p) {
        if (mx1 == -1) mx1 = ef[u];
        else if (md[ef[u]] >= md[mx1]) {
            mx2 = mx1;
            mx1 = ef[u];
        } else {
            if (mx2 == -1) mx2 = ef[u];
            else if (md[mx2] < md[ef[u]]) mx2 = ef[u];
        }
    }
    if (mx2 == -1) {
        ans[c] = max(ans[c], md[mx1]);
    } else {
        ans[c] = max(ans[c], md[mx1]);
        ans[c] = max(ans[c], md[mx2]);
    }
    for (int u = pf[c]; u; u = ef[u + 1]) if (ef[u] != p) {
        if (ef[u] == mx1) dfs2(ef[u], c, max(v + 1, md[mx2] + 1));
        else dfs2(ef[u], c, max(v + 1, md[mx1] + 1));
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) pf[i] = 0;
    for (int i = 1, t = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        ef[t++] = u, ef[t++] = pf[v], pf[v] = t - 2;
        ef[t++] = v, ef[t++] = pf[u], pf[u] = t - 2;
    }
    dfs1(1, 1, 0);

    ans[1] = 0;
    int mx1 = -1, mx2 = -1;
    for (int u = pf[1]; u; u = ef[u + 1]) {
        if (mx1 == -1) mx1 = ef[u];
        else if (md[ef[u]] >= md[mx1]) {
            mx2 = mx1;
            mx1 = ef[u];
        } else {
            if (mx2 == -1) mx2 = ef[u];
            else if (md[mx2] < md[ef[u]]) mx2 = ef[u];
        }
    }
    if (mx1 == -1) goto out;
    if (mx2 == -1) {
        ans[1] = max(ans[1], md[mx1]);
    } else {
        ans[1] = max(ans[1], md[mx1]);
        ans[1] = max(ans[1], md[mx2]);
    }
    for (int u = pf[1]; u; u = ef[u + 1]) {
        if (ef[u] == mx1) dfs2(ef[u], 1, md[mx2] + 1);
        else dfs2(ef[u], 1, md[mx1] + 1);
    }
    out:
    for (int i = 1; i <= n; ++i) cout << ans[i] << ' ';
    cout << '\n';
}