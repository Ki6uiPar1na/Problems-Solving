// Author: Ki6ui Par1na
#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define endl '\n'
#define size(x) (int)(x).size()
#define FAST (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll mpow(ll x,ll y,ll m=1e9+7){ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    int n; cin >> n;
    cout << n << ' ';
    while(n != 1){
    	if(n & 1){
    		n = (n * 3) + 1;
    		cout << n << ' ';
    	} else{
    		n /= 2;
    		cout << n << ' ';
    	}
    }
    cout << endl;
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

