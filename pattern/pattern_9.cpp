#include<bits/stdc++.h>
using namespace std;

int pattern(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
         for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }

}


int patternn(int n)
{
     for(int i=0;i<n;i++)
    {
       for(int j=0;j<i;j++)
       {
        cout<<" ";
       }
       for(int j=0;j<2*n-(2*i+1);j++)
       {
        cout<<"*";
       }
       for(int j=0;j<i;j++)
       {
        cout<<" ";
       }
       cout<<endl;
    }
    

}


int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    pattern(n);
    patternn(n);

}