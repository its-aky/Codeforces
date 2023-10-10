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
        ll px,py;
        cin>>px>>py;
        ll ax,ay,bx,by;
        cin>>ax>>ay;
        cin>>bx>>by;

        //calculating the required distance without square roots as of now
        ll ap=(ax-px)*(ax-px)+(ay-py)*(ay-py);
        ll bp=(bx-px)*(bx-px)+(by-py)*(by-py);
        ll ao=(ax)*(ax)+(ay)*(ay);
        ll bo=(bx)*(bx)+(by)*(by);

        //taking min of case 1 and case 2
        ll ans=min(max(ap,ao),max(bp,bo));

        ll ab=(ax-bx)*(ax-bx)+(ay-by)*(ay-by);
        
        double an1=ans,an3=ans;
        ll val1=max(bp,ao);//max(bp,ao,ab/2)==max(max(ao,bp),ab/2)

        double dis=(sqrt(ab))/2.0;
        double dis1=sqrt(val1);//case 3
        an1=max(dis,dis1);
        ll val2=max(bo,ap);
        double dis3=sqrt(val2);

        an3=max(dis,dis3);//case 4

        double an2=sqrt(ans);

        //taking minimum of all cases
        an2=min(an2,an1);
        an2=min(an3,an2);

        cout<<setprecision(12)<<an2<<endl;//setprecision is quite useful


    }
}