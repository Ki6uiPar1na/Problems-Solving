/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/22
|Time: 09:43:10
|Problem: B_Journey
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
#define all(v) v.begin(), v.end()

int nCr(int n, int r){ int ans=1; for(int i=1;i<=r;i++){ ans=ans*(n-i+1)/i; } return ans; }

int fact(int n){if (n <= 1)return 1;return n*fact(n-1);}

int nPr(int n, int r){return fact(n)/fact(n-r);}

int intDigitSum(int n){int sum = 0; while(n){sum += n % 10; n /= 10;} return sum;}

int strDigitSum(string s){int sum = 0; for(int i = 0; i < s.size(); i++){sum += (s[i] - '0');} return sum;}

vector<int> prime(N, 1);
void seive(){ prime[0] = prime[1] = 0; for(int i = 2; i * i <= N; i++){ if(prime[i] == 1){ for(int j = i * i; j <= N; j += i){ prime[j] = 0;}}}}

int trailZero(int n){ int ans = 0; while(n > 0){ n /= 5; ans += n; } return ans; }

//power calculation
int md = 998244353151515152;
int power(int num, int pow) { int res = 1; while (pow) { if (pow & 1) res = (res * num) % md; num = (num * num) % md; pow >>= 1; } return res;}

//number palindrom
bool numIsPalindrome(int n) { int int1 = n , int2 = 0; while( n!=0 ) { int2 = int2*10 + (n%10); n /= 10; } if(int1 == int2 ) return true; else return false;}

//Array Palindrome
bool array_Palindrome(const vector<int>& vec) { int start = 0; int end = vec.size() - 1; while (start < end) { if (vec[start] != vec[end]) { return false; } start++; end--;} return true;}

//lamda function
auto compare = [](const pair<int, int>& a, const pair<int, int>& b) { if (a.first > b.first) { return true; } else if (a.first == b.first) { return a.second < b.second; } return false; };

int gcd(int a,int b){ int x = max({a,b}); int y = min({a,b}); int rem = x%y; while(rem!=0){ x = y; y = rem; rem = x%y;} return y; }
int lcm(int a, int b) { return abs(a * b) / gcd(a, b); }
//int to string
string  tostr(int n)        {stringstream rr;rr<<n;return rr.str();}

void solve() {
    tc {
        int n, a, b, c; cin >> n >> a >> b >> c;
        int sum = a + b + c;
        int day = 0, val = 0;

        int temp = n / sum;
        val = temp * sum;
        day = temp * 3;

        if (val >= n) {
            cout << day << endl;
            continue;
        }

        if (val + a >= n) {
            cout << day + 1 << endl;
            continue;
        }

        if (val + a + b >= n) {
            cout << day + 2 << endl;
            continue;
        }

        if (val + a + b + c >= n) {
            cout << day + 3 << endl;
            continue;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}