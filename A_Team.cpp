#include<iostream>
#include <bits/stdc++.h>
#include<vector>
#include<cmath>
#include<map>
#include<string>
#define MOD 1000000007
#define ll long long int
using namespace std;

int main()
{
   /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif */
    int a,b,c,count=0;
    int n;
    cin>>n;
    while(n--)
      {
          cin>>a >>b >>c;
          if(a+b+c >=2)
          {
              count++;
          }
      }
       
    cout<< count;

    return 0;
	
}