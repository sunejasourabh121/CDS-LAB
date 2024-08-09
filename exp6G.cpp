//Sourabh Suneja
//23070123129
//entc b2
//experiment 6
#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,n;
    cout<<"enter number of rows-";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        while(k!=(i-1))
        {
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<endl;
    }
    cout<<endl;
}