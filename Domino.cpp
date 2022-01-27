#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int row,column;
    cin>>row>>column;
    int ar=row*column;
    double count=floor(ar/2);
    cout<<count;
    return 0;
}