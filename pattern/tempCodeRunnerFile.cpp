 int space;
    space=2*(n-1);

    for(int i=0;i<n;i++)
    {

        for(int j=0;j<i;j++)
        {
            cout<<j+1;
        }

        for(int j=0;j<space;j++)
        {
            cout<<" ";
        }




        for(int j=i;j>0;j--)
        {
            cout<<j;
        }

        cout<<endl;
        space-=2;
        
