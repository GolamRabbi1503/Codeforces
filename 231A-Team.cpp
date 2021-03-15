#include<iostream>
using namespace std;
int main()
{

    int n,j,arr[10],sum=0,count=0;
    cin>>n;
    while(n--)
    {
        for(j=0; j<3; j++)
        {
            cin>>arr[j];
        }
        sum=0;
        for(j=0; j<3; j++)
        {
            if(arr[j]==1)
                sum++;

        }
        if(sum>=2)
            count++;
    }
    cout<<count;
    return 0;
}
