#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int lego(string s1,string s2)
{
    transform(s1.begin(),s1.end(),s1.begin(),::tolower); //it performs operation on 
                                                            //first and second argument
                                                            //and result stored in 3rd .
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    int a=s1.size();
    int b=s2.size();
    if(a==b)
    {
        for(int i=0;i<a;i++)
        {
            if((char)s1[i]>(char)s2[i])
            {
                return 1;
            }
            else if((char)s1[i]<(char)s2[i])
            {
               return -1;

            }
        }
      return 0;
    }
}
int main()
 {
    string s1,s2;
    int x;
    cin>>s1;
    cin>>s2;
    x=lego(s1,s2);
    cout<<x;
    return 0;
 }
