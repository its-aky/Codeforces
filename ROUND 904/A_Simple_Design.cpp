#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll helper(ll x){
    ll sum=0;
    while (x!=0)
    {
        sum+=x%10;
        x/=10;
    }
    return sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, k;
        cin >> x >> k;

        while (true)
        {
            ll val=helper(x);
            if(val%k==0){
                cout<<x<<endl;
                break;
            }
            else
            {
                x++;
            }
            
        }
        

        

        

        
        
    }
}