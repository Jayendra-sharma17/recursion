#include<iostream>
using namespace std;
bool issorted(int *arr,int n)
{
    if(n==0 ||n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool ans=issorted(arr+1,n-1);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    bool ans=issorted(arr,n);
    if(ans)
    {
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    
    return 0;
}