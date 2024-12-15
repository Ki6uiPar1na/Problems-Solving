/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/14
|Time: 18:08:57
|Problem: C_Soldier_and_Cards
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

//lamda function
auto compare = [](const pair<int, int>& a, const pair<int, int>& b) { if (a.first > b.first) { return true; } else if (a.first == b.first) { return a.second < b.second; } return false; };

int lcm(int a, int b) { return abs(a * b) / __gcd(a, b); }
//int to string
string  tostr(int n)        {stringstream rr;rr<<n;return rr.str();}

void solve() {

    int n; cin >> n;
    int a; cin >> a;
    queue<int> v1;
    for(int i = 0; i < a; i++){
        int x; cin >> x;
        v1.push(x);
    }
    int b; cin >> b;
    queue<int> v2;
    for(int i = 0; i < b; i++){
        int x; cin >> x;
        v2.push(x);
    }

    int operation = pow(2, n);
    int cn = 0;
    int iteration = pow(4, n);
    while(!v1.empty() and !v2.empty() and iteration--){
        int x1 = v1.front();
        v1.pop();
        int x2 = v2.front();
        v2.pop();
        if(x1 > x2){
            cn++;
            v1.push(x2);
            v1.push(x1);
        }
        else if(x1 < x2){
            cn++;
            v2.push(x1);
            v2.push(x2);
        }
    }
    if(v1.size() == 0){
        cout << cn << ' ' << 2 << endl;
    }
    else if(v2.size() == 0){
        cout << cn << ' ' << 1 << endl;
    }
    else if(cn == pow(4, n)){
        cout << -1 << endl;
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}