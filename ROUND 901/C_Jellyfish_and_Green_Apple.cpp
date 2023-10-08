//Instead of recursion use loops more oftenly
//Consider/remember modulo as a basic operator and also use its properties



#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        long long ans=0;
        int counter=0;
        a=(a%b);
        while (counter<=30)//2^30 is the limit for INT_MAX,if until 30 it is not found then return -1
        {
            if(a%b == 0){
                break;
            }
            else
            {
                a=a%b;
                ans+=a;
                a=(2*a) % b;//using property of modulo
            }
            counter++;
            
        }

        if(a%b==0)cout<<ans<<endl;
        else{
            cout<<-1<<endl;
        }
    }
    
}