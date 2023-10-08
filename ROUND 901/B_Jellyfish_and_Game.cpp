#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> j, g;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            j.push_back(x);
        }

        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            g.push_back(x);
        }

        sort(j.begin(), j.end());
        sort(g.begin(), g.end());

        if (k >= 1)
        {
            if (j[0] < g[m - 1])
            {
                swap(j[0], g[m - 1]);
            }
            sort(j.begin(), j.end());
            sort(g.begin(), g.end());
            k--;
        }

        if (k % 2 == 1)
        {
            swap(g[0],j[n-1]);
            sort(j.begin(), j.end());
            sort(g.begin(), g.end());
            
        }

        long long ans=0;

        for(int i: j){
            ans+=i;
        }

        cout<<ans<<endl;
    }
}


/*

Mistake made: Not actually swapping the values from 
one to another array,rather depending on their maximum
and minimum values and their sums which will change after
each round(k),hence resulting in wrong output

*/


// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     long long t;
//     cin>>t;
//     while (t--)
//     {
//         long long n,m,k;
//         cin>>n>>m>>k;

//         vector<long long> j,g;

//         for (long long i = 0; i < n; i++)
//         {
//             long long x;
//             cin>>x;
//             j.push_back(x);
//         }
        
//         for (long long i = 0; i < m; i++)
//         {
//             long long x;
//             cin>>x;
//             g.push_back(x);
//         }

//         long long j_max=*max_element(j.begin(),j.end());
//         long long j_min=*min_element(j.begin(),j.end());

//         long long g_max=*max_element(g.begin(),g.end());
//         long long g_min=*min_element(g.begin(),g.end());

//         long long j_sum=0,g_sum=0;

//         for (long long i = 0; i < n; i++)
//         {
//             j_sum+=j[i];

//         }

//         for (long long i = 0; i < m; i++)
//         {
//             g_sum+=g[i];
            
//         }

//         // bool j_swap=j_min<g_max;
//         // bool g_swap=g_min<j_max;

//         if(k>=1){
//             if(j_min<g_max){
//                 j_sum=j_sum-j_min+g_max;
//                 g_sum=g_sum+j_min-g_max;
//             }
//             k--;
//         }

//         if(k%2==1){
//             if(j_max>g_min){
//                 j_sum=j_sum-j_max+g_min;
//                 g_sum=g_sum+j_max-g_min;
//             }
//         }

//         cout<<j_sum<<endl;

        

        
        




//     }
    
// }