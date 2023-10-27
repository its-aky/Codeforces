//This codes gives wrong due to integer overflow bcoz of 2^temp

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define mod 1000000007
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;

//         vector<ll> arr;
//         for (ll i = 0; i < n; i++)
//         {
//             ll x;
//             cin>>x;
//             arr.push_back(x);
//         }

//         ll last=arr[0];
//         ll ans=0;
//         for (ll i = 1; i < n; i++)
//         {
//             if(arr[i]<last){

//                 ll temp;
//                 temp=ceil(log2((double)last/arr[i]*1.0));
//                 ans+=temp;
//                 arr[i]*=pow(2,temp);
//             }
//             last=max(last,arr[i]);
//         }

//         cout<<ans<<endl;
        
        
//     }
// }


//So we use a safer approach ,multiplying everytime

//But still gives TLE bcoz elements before any index is also processsed everytime
// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define mod 1000000007

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll n;
//         cin >> n;

//         vector<ll> arr;
//         for (ll i = 0; i < n; i++) {
//             ll x;
//             cin >> x;
//             arr.push_back(x);
//         }

//         ll last = arr[0];
//         ll ans = 0;
//         for (ll i = 1; i < n; i++) {
//             if (arr[i] < last) {
//                 ll temp = 0;
//                 while (arr[i] < last) {
//                     arr[i] *= 2;
//                     temp++;
//                 }
//                 ans += temp;
//             }
//             last = arr[i];
//         }

//         cout << ans << endl;
//     }
// }

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

        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }

        ll ans=0;
        ll curr=0;

        for(ll i=1;i<n;i++){
            ll ele=arr[i];
            while (curr>0 && ele>=2*arr[i-1])
            {
                curr--;
                ele/=2;
            }

            while (ele<arr[i-1])//This uses the previous calculations in present ones helping to reduce the TC  
            {
                curr++;
                ele*=2;
            }

            ans+=curr;
        }

        cout<<ans<<'\n';
    }
}