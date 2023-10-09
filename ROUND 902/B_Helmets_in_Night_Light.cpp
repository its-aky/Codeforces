/*
Input:5 4
2 2 3 1 1
1 1 3 3 2

expected o/p:8
output according to the code:11

Reason : Logical error
Explaination : The below program does not consider when one man(other than Pak Chanek) passes to another
man at a lower cost and the chain continues,instead of this it adds p everytime which is the cost for pak chanek
not the man with a lower cost
*/



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
            cout<<frp[i].first<<" "<<frp[i].second<<",";
        }
        
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