#include<iostream>
#include<math.h>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() 
{
    int arr[5][5],istore,jstore;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
           if(arr[i][j]==1)
           {
            istore=i;
            jstore=j;
           }
        }
    }
           int a=abs(2-istore);
           int b=abs(2-jstore);
           int sum=a+b;
           cout<<sum;
 
    return 0;
}
