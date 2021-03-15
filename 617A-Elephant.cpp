#include<iostream>
using namespace std;
int main()
{
    int x,i,c;
    cin>>x;
//    for(i=5;i>0;i--)
//    {
//        if(x%i==0)
//        {
//            c=x/i;
//            cout<<c;
//            break;
//
//        }
//
//
//    }
if(x%5==0){
        cout<<x/5;

}
else{
    cout<<(x/5)+1;
}
    return 0;
}
