
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t!=0)
    {
        int c=0;
        cin>>x>>y;
        if(x<y)
            c=y-x;
        else if(y<x)
           c=x-y;
            cout<<c<<endl;
        t--;
    }
    return 0;
}
