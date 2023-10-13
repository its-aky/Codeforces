//https://codeforces.com/contest/1881

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
        ll n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

        ll ans=0;

        while (1)
        {
            //Check for the presence of substring directly using inbuilt function find
            if(x.find(s)!=string::npos){
                break;

            }


            //if x.size()>2*m it is observed if then it is not found then after that it will never be found
            if(ans!=0 && x.size()>2*m){
                ans=-1;
                break;
            }
            ans++;
            x+=x;
        }

        cout<<ans<<endl;

    }
}