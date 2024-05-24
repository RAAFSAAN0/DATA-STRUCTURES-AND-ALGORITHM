#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
int space=2*n-2;
    for(int i=0;i<2*n;i++)
    {
        int star=i;
        if(i>n) star=2*n-i;
        for(int j=0;j<star;j++)
        {
            cout<<"*";
        }

        for(int j=0;j<=space;j++)
        {
            cout<<" ";
        }

        for(int j=0;j<star;j++)
        {
            cout<<"*";
        }

        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
}
}