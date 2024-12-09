// Author: Ki6ui Par1na
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define endl '\n'
// #define size(x) (int)(x).size()
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll mpow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    string s; cin >> s;
    map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
    	mp[s[i]]++;
    }
    int cn = 0;
    for(auto &i : mp){
    	if(i.second % 2 != 0){
    		cn++;
    	}
    }
    cout << cn << endl;
}

signed main()
{
	FAST;
	int TCS = 1;
	// cin >> TCS;
	for (int TC = 1; TC <= TCS; ++TC)
	{
  	// cout<<"Case "<<TC<<": ";
  	solve();
	}
}

