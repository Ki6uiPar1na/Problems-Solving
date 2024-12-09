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
    std::vector<int> v(n);
    for(int i = 0; i < n; i++){
    	cin >> v[i];
    }
    int ans = 0;
    int mx = v[0];
    for(int i = 1; i < n; i++){
    	if(v[i] < mx){
    		ans += (mx - v[i]);
    	} else{
    		mx = v[i];
    	}
    }
    cout << ans << endl;
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

