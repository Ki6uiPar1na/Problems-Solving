#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to compute the minimum excluded value (MEX) for a set of values
int mex(const unordered_set<int>& s) {
    for (int i = 0; ; ++i) {
        if (s.find(i) == s.end()) return i;
    }
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        --x; // Convert to 0-based index
        --y; // Convert to 0-based index

        vector<int> a(n, 0);

        // To satisfy the problem constraints, we can assign distinct values to each dragon
        for (int i = 0; i < n; ++i) {
            unordered_set<int> friends;
            friends.insert(a[(i - 1 + n) % n]); // Friend on the left
            friends.insert(a[(i + 1) % n]); // Friend on the right
            if (i == x) friends.insert(a[y]);
            if (i == y) friends.insert(a[x]);
            a[i] = mex(friends);
        }

        for (int i = 0; i < n; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
