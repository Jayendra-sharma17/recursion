#include<iostream>
using namespace std;
bool palindrome(string &str,int i,int j)
{

    // base case
    if(i>j)
    {
        return true;
    }
    if(str[i]!=str[j])
    {
        return false;
    }
    else{
  return  palindrome(str,i+1,j-1);

    }
}
int main()
{
    string name;
    cout<<"enter the string ";
    cin>>name;
    bool check=palindrome(name,0,name.length()-1);
if(check)
{
    cout<<"palindrome"<<endl;
}   
else{
    cout<<"not";
}
    return 0;
}