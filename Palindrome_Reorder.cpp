/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/08
|Time: 13:44:12
|Problem: Palindrome_Reorder
|____________________________________________________*/

// #include<myBrain>
// #include<loveYouTooooooo>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1e5 + 5
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(n) cout << (n) << endl;
#define tc    \
    ll t;     \
    cin >> t; \
    while (t--)
#define int long long
int nCr(int n, int r)
{
    int ans = 1;
    for (int i = 1; i <= r; i++)
    {
        ans = ans * (n - i + 1) / i;
    }
    return ans;
}
int fact(int n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
int nPr(int n, int r) { return fact(n) / fact(n - r); }
int intDigitSum(int n)
{
    int sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int strDigitSum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += (s[i] - '0');
    }
    return sum;
}
vector<int> prime(N, 1);
void seive()
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = 0;
            }
        }
    }
}
int trailZero(int n)
{
    int ans = 0;
    while (n > 0)
    {
        n /= 5;
        ans += n;
    }
    return ans;
}
int lcm(int a, int b) { return abs(a * b) / __gcd(a, b); }

void solve()
{

    string s;
    cin >> s;
    int len = s.size();
    vector<char> vs(len);
    sort(s.begin(), s.end());
    int cn = 0;
    map<char, int> mp;
    for (int i = 0; i < len; i++)
    {
        mp[s[i]]++;
    }
    int flag = 0;
    for (auto &i : mp)
    {
        if (i.second % 2 != 0)
        {
            flag++;
        }
    }
    if (flag > 1)
        cout << "NO SOLUTION" << endl;
    else
    {

        char ch;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == s[i + 1])
            {
                vs[i] = s[i];
                vs[len - i - 1] = s[i + 1];
            }
            else
            {
                ch = s[i];
                cn++;
            }
        }
        int j = len / 2;
        while (cn--)
        {
            vs[j] = ch;
        }
    }
    for (int i = 0; i < len; i++)
    {
        cout << vs[i];
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}