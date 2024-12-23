/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/23
|Time: 12:42:30
|Problem: C_Preparing_for_the_Exam
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
#define tc ll t; cin >> t; for(int TC = 1; TC <= t; TC++)
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

//    cout << "Case " << TC << ": ";
    tc{
        int n, m, k; cin >> n >> m >> k;
        vector<int> v1(m), v2(k);
        for(int i = 0; i < m; i++){
            cin >> v1[i];
        }
        for(int i = 0; i < k; i++){
            cin >> v2[i];
        }
        vector<int> ans(n + 1);
        for(int i = 1; i <= n; i++){
            ans[i] = 1;
        }
        for(int i = 0; i < k; i++){
            ans[v2[i]] = 0;
        }
        int cn = 0;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == 1){
                cn++;
            }
        }
        // cout << cn << endl;
        if(cn == 0){
            for(int i = 0; i < m; i++){
                cout << 1;
            }
            cout << endl;
        }
        else if(cn > 1){
            for(int i = 0; i < m; i++){
                cout << 0;
            }
            cout << endl;
        }
        else{
            for(int i = 0; i < m; i++){
                if(ans[v1[i]] == 1){
                    cout << 1;
                }
                else{
                    cout << 0;
                }
            }
            cout << endl;
        }

    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}