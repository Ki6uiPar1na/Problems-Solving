

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> vp;
void tower_hanoi(int n, int a, int b, int c) {
    if (n == 1) {
        vp.push_back({a, b});
        return;
    }
    tower_hanoi(n - 1, a, c, b);
    vp.push_back({a, b});
    tower_hanoi(n - 1, b, a, c);
}


void solve() {

    int n; cin >> n;
    tower_hanoi(n, 1, 3, 2);
    cout << vp.size() << endl;
    for (auto &it : vp) {
        cout << it.first << " " << it.second << endl;
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}