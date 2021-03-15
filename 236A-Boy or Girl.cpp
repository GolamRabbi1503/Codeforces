#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    char str[101];
    int i,l,count=0;

    cin>>str;
    l= strlen(str);
    //cout<<l;
    sort(str,str+l);
    for(i=0; i<l; i++)
    {
        if (str[i]!=str[i+1])
            count++;

    }
    if(count%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
