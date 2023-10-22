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
        ll n;
        cin>>n;
        string s;
        cin>>s;

        reverse(s.begin(),s.end());

        vector<ll> zeroes;
        for (ll i = 0; i <s.size(); i++)
        {
            
            if(s[i]=='0'){
                zeroes.push_back(i);
            }
        }

        for (ll i = 0; i < zeroes.size(); i++)
        {
            zeroes[i]=zeroes[i]-i;
        }

        ll sum=0;

        for (ll i = 0; i < zeroes.size(); i++)
        {
            sum+=zeroes[i];
            zeroes[i]=sum;
        }

        ll remain=n-zeroes.size();

        for (ll i = 0; i < remain; i++)
        {
            zeroes.push_back(-1);
        }

        for (ll i = 0; i < n; i++)
        {
            cout<<zeroes[i]<<" ";
        }
        cout<<endl;
    }
}