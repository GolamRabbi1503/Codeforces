#include<iostream>
using namespace std;
int main()
{
    int n,i,a[100],add=0,l;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    l=a[0]; //set the value for comparing
    for(i=1; i<n; i++)
    {
        if(l<a[i])
            l= a[i];

    }
    //cout<<"The largest value is"<<l<<endl;
    for(i=0; i<n; i++)
    {
        if(a[i]<l)
        {
            add+=l-a[i];


        }

    }
    cout<<add;
    return 0;
}
