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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        map<char,int> m;
        for (ll i = 0; i < n; i++)
        {
            m[s[i]]++;
        }

        ll odd=0;
        for (auto it: m)
        {
            if (it.second % 2!=0)
            {
                odd++;
            }
        }

        if(odd<=k || odd==1 || odd-k==1){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
        
        

    }
}