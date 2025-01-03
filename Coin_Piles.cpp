/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/08
|Time: 11:26:14
|Problem: Coin_Piles
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

void solve() {

    tc{
        int a, b; cin >> a >> b;

        if(a == b and a % 3 == 0){
            yes
        }
        else if(a > b and (b >= a / 2)){
            if(a % 3 == 0 and b % 3 == 0){
                yes
            }
            else if(b == a + 1 / 2){
                yes
            }
            else{
                no
            }
        }
        else if(a < b and (a >= (b / 2))){
            if(b % 3 == 0 and a % 3 == 0){
                yes
            }
            else if(a == b + 1 / 2){
                yes
            }
            else{
                no
            }
        }
        else{
            no
        }
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}