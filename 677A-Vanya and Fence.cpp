#include <iostream>
using namespace std;
int main()
{
    int n,h,i,c1=0,c2=0,a[1000],c=0;
    cin>>n>>h;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<=h)
            c1++;
        else
            c2+=2;


    }
    c=c1+c2;
    cout<<c;
    return 0;
}
