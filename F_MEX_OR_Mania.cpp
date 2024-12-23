#include<bits/stdc++.h>
using namespace std;

int mex(const vector<int>& subarray) {
    unordered_set<int> s(subarray.begin(), subarray.end());
    for (int i = 0; ; ++i) {
        if (s.find(i) == s.end()) return i;
    }
}

bool isGood(const vector<int>& subarray) {
    int subarray_mex = mex(subarray);
    int subarray_or = 0;
    for (int num : subarray) {
        subarray_or |= num;
    }
    return (subarray_mex - subarray_or) == 1;
}

int longestGoodSubarray(vector<int>& a) {
    int max_length = 0;
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            vector<int> subarray(a.begin() + i, a.begin() + j + 1);
            if (isGood(subarray)) {
                max_length = max(max_length, j - i + 1);
            }
        }
    }
    return max_length;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < q; ++i) {
            int idx, x;
            cin >> idx >> x;
            a[idx - 1] += x; 
            cout << longestGoodSubarray(a) << endl; 
        }
    }

    return 0;
}
