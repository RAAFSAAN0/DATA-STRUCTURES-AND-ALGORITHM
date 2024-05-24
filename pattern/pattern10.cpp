#include<bits/stdc++.h>
using namespace std;

int pattern9(int n)
{
    
    for(int i=0;i<2*n;i++)
    {
        int stars=i;
       if(stars>n)
        {
            stars=2*n-i;
        }
        for(int j=0;j<stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}


int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    pattern9(n);
   

}