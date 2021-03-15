#include<iostream>
using namespace std;
int main(){
    int n,i,count=0;
    cin>>n;
    int arr[12]={4,7,47,74,44,444,447,474,477,777,774,744};
    for(i=0;i<12;i++){
        if(n%arr[i]==0)
            count++;
    }
    if(count>=1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
