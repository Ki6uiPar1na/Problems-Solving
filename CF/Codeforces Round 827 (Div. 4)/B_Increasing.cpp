#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int A[n + 1];
        for(int i = 0; i < n; i++){
            cin >> A[i];
        }
        sort(A, A + n);
        int count = 0;
            for(int i = 0; i < n ; i++){
                if(A[i] == A[i + 1]){
                    count++;
                }
            }
        // cout << count << endl;
        if(count == 0) cout << "YES" << endl;
        else{
            cout << "NO" << endl;
            //
        }
        // for(int i = 0; i < n; i++){
        //     cout << A[i] << ' ';
        // }
    }
}