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
        ll n, k;
        cin >> n >> k;

        vector<int> arr;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            arr.push_back(x);
        }

        ll ans = INT_MAX;

        if (k == 3)
        {
            bool flag = false;

            for (ll i = 0; i < n; i++)
            {
                if (arr[i] % 3 == 0)
                {
                    flag = true;
                    break;
                }
                ans = min(ans, k - (arr[i] % k));
            }

            if (flag)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }

        else if (k == 5)
        {
            bool flag = false;

            for (ll i = 0; i < n; i++)
            {
                if (arr[i] % 5 == 0)
                {
                    flag = true;
                    break;
                }
                ans = min(ans, k - (arr[i] % k));
            }

            if (flag)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << ans << endl;
            }
        }

        else if (k == 2)
        {
            bool flag = false;
            for (ll i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }

        else if (k == 4)
        {
            bool flag = false;
            ll count = 0;
            for (ll i = 0; i < n; i++)
            {

                if (arr[i] % 2 == 0)
                {
                    count++;
                }
                if (arr[i] % 4 == 0)
                {
                    flag = true;
                    break;
                }
                ans = min(ans, k - (arr[i] % k));
            }
            if (flag)
            {
                cout << 0 << endl;
            }
            else
            {
                if (count >= 2)
                {
                    cout << 0 << endl;
                }
                else if (count == 1)
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << min(ans,2*1LL) << endl;
                }
            }
        }
    }
}