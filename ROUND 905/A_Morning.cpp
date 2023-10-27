#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char,int> m;
        m['0']=9;
        m['1']=0;
        m['2']=1;
        m['3']=2;
        m['4']=3;
        m['5']=4;
        m['6']=5;
        m['7']=6;
        m['8']=7;
        m['9']=8;

        ll ans=0;
        int initial=0;
        for (int i = 0; i < 4; i++)
        {
            ans+=abs(initial-m[s[i]]);
            initial=m[s[i]];
        }

        ans+=4;
        cout<<ans<<endl;
        
    }
}