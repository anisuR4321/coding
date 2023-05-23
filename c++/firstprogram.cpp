#include<iostream>
using namespace std;
int main ()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter the elements of the matrix ["<<i<<"]["<<j<<"]"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"Matrix is : "<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<endl;
        }
    }

}