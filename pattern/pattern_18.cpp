#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char c='A'+n-1;
        for(char ch=c-i;ch<=c;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}