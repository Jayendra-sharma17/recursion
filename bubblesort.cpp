#include<iostream>
using namespace std;
int bubble(int *arr,int n)
{
    // base case
    if(n==0||n==1)
    {
        return true ;
    }
    for ( int i = 0; i <n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }
   return bubble(arr,n-1);
}
int main()
{
    int arr[7]={5,4,3,2,1,88,11};
    int n=7;
    bubble(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    
    return 0;
}