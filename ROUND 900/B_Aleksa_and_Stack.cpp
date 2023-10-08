#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v={1,3};

        for (int i = 2; i < n; i++)
        {
            int x=v[i-1];
            v.push_back(x+2);
        }

        for (int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;


    }
    
}