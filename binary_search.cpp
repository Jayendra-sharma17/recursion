#include<iostream>
using namespace std;
bool binary_search(int *arr,int s,int e,int key)
{
    if(s>e)
    {
        return false;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==key)
    {
        return true;
    }
    if(arr[mid]<key)
    {
        return binary_search(arr,mid+1,e,key);
    }
    else{
        return binary_search(arr,s,mid-1,key);
    }
}
int main()
{
    int arr[6]={1,2,3,5,6,8};
    int size=6;
    int key=36;
    // cout<<"making some changes"
  
    cout<<"present or not"<< binary_search(arr,0,size-1,key);
    return 0;
}