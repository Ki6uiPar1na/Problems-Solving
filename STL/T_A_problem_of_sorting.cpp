/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/14
|Time: 12:43:40
|Problem: T_A_problem_of_sorting
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<math.h>
using namespace std;

void solve() {
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        map<int, string> mp;
        vector<int> v;
        while(n--){
            string s;
            int dob;
            cin >> s >> dob;
            mp[dob] = s;
            v.push_back(dob);
        }
        sort(v.rbegin(), v.rend());
        for(auto &i : v){
            cout << mp[i] << endl;
        }
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}