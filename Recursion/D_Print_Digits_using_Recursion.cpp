/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/12
|Time: 23:15:01
|Problem: D_Print_Digits_using_Recursion
|____________________________________________________*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << ' ';
#define tc ll t; cin >> t; while(t--)
#define int long long
const int N = 1e5 + 5;

void printDigit(int n) {
    if (n < 0) {  // Handle negative numbers
        cout << '-';
        n = -n;
    }
    if (n == 0) {
        print(0); // Special case for input 0
        return;
    }
    if (n / 10) {  // Recursive call to process higher digits
        printDigit(n / 10);
    }
    print(n % 10); // Print the last digit
}

void solve() {
    tc {
        int n;
        cin >> n;
        printDigit(n);
        cout << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
