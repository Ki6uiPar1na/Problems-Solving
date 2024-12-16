/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/09/29
|Time: 03:07:05
|Problem: A_Magic_Numbers
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
void solve() {

    string s; cin >> s;
    bool f = false;
    int cn1 = count(s.begin(), s.end(), '1');
    int cn4 = count(s.begin(), s.end(), '4');
    if(cn1 + cn4 != s.size()){
        f = true;
    }
    if((s.find("444") != string::npos) or (s[0] == '4')){
        f = true;
    }
    if(f){
        no
    } else{
        yes
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}