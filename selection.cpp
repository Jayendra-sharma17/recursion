#include<iostream>
using namespace std;
void selection(int *arr,int n)
{
    if (n==0||n==1)
    {
return;
    }
    
    for (int i = 0; i <n-1; i++)
    {
        int mini=i;
        for (int j = i+1; j<n; j++)
        {
            if (arr[j]<arr[j+1])
            {
                mini=j;
            }
            
        }
                swap(arr[mini],arr[i]);

    }
    

}
int main()
{
    int arr[5]={5,4,3,2,1};
    int n=5;
    selection(arr,n);
    for (int i = 0; i < n; i++)
    {

    cout<<"sorted array is"<<endl;
    cout<<arr[i]<<" "<<endl;
    }
    
    return 0;
}