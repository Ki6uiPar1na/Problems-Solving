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
    int a, b; cin >> a >> b;
    bool f = false;
    while(a > 0 and b > 0){
    	if(a > b){
    		a -= 2;
    		b -= 1;
    	} else{
    		b -= 2;
    		a -= 1;
    	}
    	if(a % 3 == 0 and b % 3 == 0 and (a != 0 or b != 0)){
    		f = true;
    		break;
    	}
    	if(a < 0 or b < 0){
    		break;
    	}
    }
    if(f or (a == 0 and b == 0)){
    	cout << "YES\n";
    } else{
    	cout << "NO\n";
    }
}

signed main()
{
	FAST;
	int TCS = 1;
	cin >> TCS;
	for (int TC = 1; TC <= TCS; ++TC)
	{
  	// cout<<"Case "<<TC<<": ";
  	solve();
	}
}

