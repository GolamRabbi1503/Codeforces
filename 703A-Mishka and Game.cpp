#include<iostream>
using namespace std;
int main()
{
    int n,m,c,i,c1=0,c2=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m>>c;
        if(m>c)
            c1++;
        if(c>m)
            c2++;
    }
//    cout<<c1;
//    cout<<c2;
    if(c1==c2)
        cout<<"Friendship is magic!^^";
    else  if(c1>c2)
        cout<<"Mishka";
    else
        cout<<"Chris";
    return 0;
}
