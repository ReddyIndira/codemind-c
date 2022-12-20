#include<iostream>
using namespace std;
int main()
{
    int n,k,l,m;
    cin>>n>>k;
    m=n+1;
    l=n-1;
    if(k==m || k==l)
    {
        cout<<"Yes"<<endl;
    }
    else if(n==1 && k==10 || n==10 && k==1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}
   