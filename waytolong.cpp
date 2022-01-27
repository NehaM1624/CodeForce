#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--)
    {
    int i,count=0;
    string n;
    cin>>n;
    int len=n.size();
    if(len>10)
        {
            char a = n.at(0);
            char b = n.at(len-1);
            for(i=1;i<len-1;i++)
            {
                count++;
            }
            cout<<a<<count<<b<<endl;
        }
        else 
        {
            cout<<n<<endl;
        }
    }
    return 0;
}