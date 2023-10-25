#include<iostream>
using namespace  std;
int check_sum(int *arr,int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    int sum=arr[0]+check_sum(arr+1,n-1);
    return sum;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int ans=check_sum(arr,n);
    cout<<"sum is "<<ans<<endl;
    return 0;
}