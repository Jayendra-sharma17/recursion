#include<iostream>
using namespace std;
int linear_search(int arr[],int size,int key)
{
    if(size==0)
    {
        return false;
    }
    else if(arr[size-1]==key)
    {
        return size-1;
    }
    
   return linear_search(arr,size-1,key);
        

    
}
int main()
{
int arr[6]={1,2,3,4,5,6};
int size=6;
int key=3;
int answer=linear_search(arr,size,key);
if(answer==-1)
{
    cout<<"value is not found"<<answer<<endl;
}
else{
    cout<<"value is found"<<key<<"at index"<<answer<<endl;
}

    return 0;
}