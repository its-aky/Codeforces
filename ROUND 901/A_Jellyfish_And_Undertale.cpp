#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        long long arr[n];
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]>=a){
                arr[i]=a-1;
            }
            sum+=arr[i];
        }

        cout<<sum+b<<endl;



        
    }
    
}