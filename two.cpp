#include<iostream>
using namespace std;
int kadane(int arr[],int n)
{
     int res=arr[0];
     int maximum=arr[0];
    for(int i=1;i<n;i++)
     {
         maximum=max(maximum+arr[i],arr[i]);
         res=max(res,maximum);
     }
     return res;
}
int main()
 {
     int p;
     cin>>p;
     while(p--)
     {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int sum=0;
     for(int i=0;i<n;i++)
     {
         sum+=arr[i];
     }
     
     int result1=kadane(arr,n);
     
     for(int i=0;i<n;i++)
     {
         arr[i]=-arr[i];
     }
     
     int result2=kadane(arr,n);
     result2=result2+sum;
     int final=max(result1,result2);
     if(result1<0)
     cout<<result1<<endl;
     else
     cout<<final<<endl;
 }
 }

