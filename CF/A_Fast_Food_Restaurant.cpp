/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/15
|Time: 10:06:28
|Problem: A_Fast_Food_Restaurant
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

    tc{
        int a, b, c; cin >> a >> b >> c;
        int cn = 0;
        if(a >= 4 and b >= 4 and c >= 4){
            cout << 7 << endl;
        }
        else{
            if(a > b and a > c){
                if(a > 0){
                    cn++;
                    a--;
                }
                if(b > 0){
                    cn++;
                    b--;
                }
                if(c > 0){
                    cn++;
                    c--;
                }
                if(a > 0 and b > 0){
                    cn++;
                    a--, b--;
                }
                if(a > 0 and c > 0){
                    cn++;
                    a--, c--;
                }
                if(b > 0 and c > 0){
                    cn++;
                    b--, c--;
                }
                if(a > 0 and b > 0 and c > 0){
                    cn++;
                    a--, b--, c--;
                }
                cout << cn << endl;
            }
            else if(b > a and b > c){
                if(b > 0){
                    cn++;
                    b--;
                }
                if(a > 0){
                    cn++;
                    a--;
                }
                if(c > 0){
                    cn++;
                    c--;
                }
                if(b > 0 and a > 0){
                    cn++;
                    b--, a--;
                }
                if(b > 0 and c > 0){
                    cn++;
                    b--, c--;
                }
                if(a > 0 and c > 0){
                    cn++;
                    a--, c--;
                }
                if(a > 0 and b > 0 and c > 0){
                    cn++;
                    a--, b--, c--;
                }
                cout << cn << endl;
            }
            else{
                if(c > 0){
                    cn++;
                    c--;
                }
                if(a > 0){
                    cn++;
                    a--;
                }
                if(b > 0){
                    cn++;
                    b--;
                }
                if(c > 0 and a > 0){
                    cn++;
                    c--, a--;
                }
                if(c > 0 and b > 0){
                    cn++;
                    c--, b--;
                }
                if(a > 0 and b > 0){
                    cn++;
                    a--, b--;
                }
                if(a > 0 and b > 0 and c > 0){
                    cn++;
                    a--, b--, c--;
                }
                cout << cn << endl;
            }
        }
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}