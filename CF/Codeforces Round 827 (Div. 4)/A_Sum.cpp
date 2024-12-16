#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,a,b,c,d;
    cin>>N;
    while (N--)
    {
        cin>>a>>b>>c;
        d=a;
        if(b>d) d=b;
        if(c>d) d=c;
        if((a+b+c-d)==d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
    
}