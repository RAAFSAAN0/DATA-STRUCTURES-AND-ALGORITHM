#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(char ch='A';ch<='A'+(n-1-i);ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}