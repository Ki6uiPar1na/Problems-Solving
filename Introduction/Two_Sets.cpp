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
    int n; cin >> n;
    int sum = (n * (n + 1)) / 2;
    // cout << sum << endl;
    std::vector<int> v(n + 1);    
    for(int i = 1; i <= n; i++){
    	v[i] = 1;
    }
    if(sum % 2 == 0){
    	cout << "YES\n";
    	int req = sum / 2;
    	int temp_sum = 0;
    	vector<int> ans1, ans2;
    	for(int i = n; i >= 1; i--){
    		if((temp_sum + i) < req){
    			temp_sum += i;
    			// cout << i << ' ';
    			v[i] = 0;
    			ans1.push_back(i);
    		}
    		else if(temp_sum == req){
    			break;
    		}
    	}
    	ans1.push_back(1);
    	v[1] = 0;
    	for(int i = 1; i <= n; i++){
    		if(v[i] == 1){
    			ans2.push_back(i);
    		}
    	}
    	int fin_ans = 0;
    	cout << ans1.size() << endl;
    	for(int i = 0; i < ans1.size(); i++){
    		cout << ans1[i] << ' ';
    		// fin_ans += ans1[i];
    	}
    	cout << endl;
    	// cout << fin_ans << endl;
    	fin_ans = 0;
    	cout << ans2.size() << endl;
    	for(int i = 0; i < ans2.size(); i++){
    		cout << ans2[i] << ' ';
    		// fin_ans += ans2[i];
    	}
    	cout << endl;
    	// cout << fin_ans << endl;

    }
    else{
    	cout << "NO\n";
    }
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

