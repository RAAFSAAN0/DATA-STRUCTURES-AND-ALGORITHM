#include<bits/stdc++.h>
using namespace std;

double area(vector <double> &v,int n)
{
    switch(n)
    {
        case 1: 
        
        cout<<M_PI*(v[0]*v[0]);
        
        return M_PI*(v[0]*v[0]);
        
        case 2:
        

       cout<<(v[0]*v[1]);
       
        return (v[0]*v[1]);
        
    }
}

void display(vector <double> &v)
{
    cout<<"the elements are: "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<endl;

    }
}


int main()
{
    int n;
    cout<<"how many vector elements do you want: "<<endl;
    cin>>n;
    int element;
    int x;
    
    vector <double> v;
    cout<<"Enter elements fo vector: "<<endl;
    for(int i=0;i<n;i++)

    {
        cin>>element;
        v.push_back(element);
    }

    display(v);
    cout<<"Enter which case do you want to go: "<<endl;
    cin>>x;
    area(v,x);






}