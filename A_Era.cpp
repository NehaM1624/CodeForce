#include<iostream>
using namespace std;
int main()
 {
     int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int ans1=0;
        for(int i=0;i<n;i++){
            if(arr[i]>(i+1)){
                ans1=max(ans1,arr[i]-(i+1));
            }
        }
        cout<<ans1<<endl;
    }
