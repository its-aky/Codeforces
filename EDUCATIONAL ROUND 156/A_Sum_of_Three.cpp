#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        if(n==1 || n==2 ||n==3 ||n==4 ||n==5 || n==6 || n==9){
            cout<<"NO"<<endl;
    
        }
        else{
            cout<<"YES"<<endl;
            n-=3;
            if(n%3!=0)cout<<n<<" "<<2<<" "<<1<<endl;
            else
            {
                int x=2;
                while (n%3==0)
                {
                    n-=2;
                    x+=2;
                    if (n!=x && n%3!=0 && x%3!=0)
                    {
                        cout<<n<<" "<<x<<" "<<1<<endl;
                        break;
                    }
                    
                
                }
            }
            
            
            
        }
        
        
    }
}