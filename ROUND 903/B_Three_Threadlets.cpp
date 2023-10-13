//logic smallest number ke level pe laao sabko

//In contest logic failed bcoz the remaining portion after cutting was not considered

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
        ll a,b,c;
        cin>>a>>b>>c;

        vector<ll> v={a,b,c};
        sort(v.begin(),v.end());
        int op=0;
        if (v[1]%v[0]==0 && v[2]%v[0]==0)
        {
            op+=(v[1]/v[0])-1;
            op+=(v[2]/v[0])-1;
        }

        else
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(op<=3){
            cout<<"YES"<<endl;
            continue;
        }

        cout<<"NO"<<endl;
         
    }
}