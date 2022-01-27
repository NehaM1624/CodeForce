#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st;
    for(int i =0;i<n;i++)
    {
        cin>>st;
    }
    int len =st.size();
    while(n--)
    {
    if(len%2!=0)
    {
        cout<<"NO";
    }
    else if(st[0]==')'|| st[len-1]=='(')
       {
           cout<<"NO"<<endl;
       }
    else
    {
        cout<<"YES"<<endl;
    }
  }
    return 0;
}