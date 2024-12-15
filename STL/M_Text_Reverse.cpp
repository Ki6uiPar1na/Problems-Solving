/*____________________________________________________
|Author: Ki6ui-Par1na
|Date: 2024/12/14
|Time: 09:14:55
|Problem: M_Text_Reverse
|____________________________________________________*/

//#include<myBrain>
//#include<loveYouTooooooo>
#include<iostream>
#include<sstream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;


void solve() {

    int n; cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        // cout << s << endl;
        stringstream ss(s);
        string temp;
        while(ss >> temp){
            reverse(temp.begin(), temp.end());
            cout << temp << ' ';
        }
        cout << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}