#include <bits/stdc++.h>
using namespace std;
/*
The following procedural approach is fine but it can't
handle the edge cases 

*/
//bool ans=false;

// void helper(int n,int k,long long x,long long sum){

//     //base condition
//     if(k==0){
//         if(sum==x)ans=true;
//         return;
//     }

//     if(sum>=x)return;

//     if(n==0)return;

//     if(ans==true)return;

//     //pick
//     helper(n-1,k-1,x,sum+n);
//     //not pick
//     helper(n-1,k,x,sum);
    
// }

int main(){

    int t;
    cin>>t;
    while (t--)
    {

        long long n,k;
        long long x;
        cin>>n>>k>>x;

        long long mini=(k*(k+1))/2;
        long long maxi=(k*(2*n-k+1))/2;

        if(x>=mini && x<=maxi){
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        



    }
    
}