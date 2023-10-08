#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,p;
        cin>>n>>p;

        int people[n],cost[n];

        for (int i = 0; i < n; i++)
        {
            cin>>people[i];
        }
        vector<pair<int,int>> frp;
        for (int i = 0; i < n; i++)
        {
            cin>>cost[i];
            if(cost[i]<=p){
                frp.push_back({cost[i],i});
            }
        }

        int final_cost=0;

        sort(frp.begin(),frp.end());

        for (int i = 0; i < frp.size(); i++)
        {
            if(n==0)break;
            final_cost+=p;
            n--;
            if(people[frp[i].second]<n && n!=0){
                final_cost+=cost[frp[i].second]*people[frp[i].second];
                n-=people[frp[i].second];
            }

            else
            {
                final_cost+=cost[frp[i].second]*n;
                n=0;
            }
             
        }

        
        final_cost+=p*n;
        cout<<final_cost<<endl;
       
        
        

       
        

        
        
    }
    
}