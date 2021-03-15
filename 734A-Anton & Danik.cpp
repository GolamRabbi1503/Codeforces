#include<iostream>
using namespace std;
int main()
{
    int n,i,l1=0,l2=0;
    cin>>n;
    char s[n];
    cin>>s;//s[n] three will be error,n is nothing but size
    for(i=0; i<=n; i++)
    {
        if(s[i]=='A')
        {
            l1++;
        }
        if(s[i]=='D')
        {
            l2++;

        }
    }
//    cout<<l1;
//    cout<<l2;
    if(l1>l2)
        cout<<"Anton";
    else if (l2>l1)
        cout<<"Danik";
    else
        cout<<"Friendship";
    return 0;
}
