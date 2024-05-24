#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
        int space=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
             cout<<"*";

        }
       

        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        space+=2;
    }

    space=2*n-2;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
             cout<<"*";

        }
       

        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        space-=2;
    }

}
