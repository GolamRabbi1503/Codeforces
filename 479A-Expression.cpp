#include<iostream>
using namespace std;
int main()
{
//    //1+2*3=7
//1*(2+3)=5
//1*2*3=6
//(1+2)*3=9
    int a,b,c,j,k,l,m,n;
    cin>>a;
    cin>>b;
    cin>>c;
    j=a+b*c;
    k=a*(b+c);
    l=a*b*c;
    m=(a+b)*c;
    n=a+b+c;

    if((j>=k)&&(j>=l)&&(j>=m)&& (j>=n))
        cout<<j;
    else if((k>=j)&& (k>=l) && (k>=m)&& (k>=n))
        cout<<k;
    else if((l>=j) && (l>=k) && (l>=m) && (l>=n))
        cout<<l;
    else if((m>=j) && (m>=k) && (m>=l)&& (m>=n))
        cout<<m;
    else
        cout<<n;



    return 0;
}
