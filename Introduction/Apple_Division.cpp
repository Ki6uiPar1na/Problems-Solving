/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/13
|Time: 09:46:01
|Problem: Apple_Division
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1e5 + 5
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc ll t; cin >> t; while(t--)
#define int long long
int nCr(int n, int r){ int ans=1; for(int i=1;i<=r;i++){ ans=ans*(n-i+1)/i; } return ans; }
int fact(int n){if (n <= 1)return 1;return n*fact(n-1);}
int nPr(int n, int r){return fact(n)/fact(n-r);}
int intDigitSum(int n){int sum = 0; while(n){sum += n % 10; n /= 10;} return sum;}
int strDigitSum(string s){int sum = 0; for(int i = 0; i < s.size(); i++){sum += (s[i] - '0');} return sum;}
vector<int> prime(N, 1);
void seive(){ prime[0] = prime[1] = 0; for(int i = 2; i * i <= N; i++){ if(prime[i] == 1){ for(int j = i * i; j <= N; j += i){ prime[j] = 0;}}}}
int trailZero(int n){ int ans = 0; while(n > 0){ n /= 5; ans += n; } return ans; }
int lcm(int a, int b) { return abs(a * b) / __gcd(a, b); }

void solve() {

    int n; cin >> n;
    vector<int> v(n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
        ans += v[i];
    }
    sort(v.rbegin(), v.rend());
    int sum1 = v[0], sum2 = v[1];
    int dif = INT_MAX;
    for(int i = 0; i < (1 << n); i++){
        int tempSum = 0;
        for(int j = 0; j < (n - 1); j++){
            if(i & (1 << j)){
                tempSum += v[j];
            }
        }
        int temp = ans - tempSum;
        dif = min(dif, abs(temp - tempSum));
        // cout << ans - tempSum << ' ' << tempSum << endl;

    }
    cout << dif << endl;
    // cout << abs(sum1 - sum2) << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}