#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        char ch='A';
        int breakpoint=(2*i+1)/2;

        for(int j=0;j<2*i+1;j++)
        {
            cout<<ch;
            if(j<breakpoint) ch++;
            else ch--;
        }



        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}