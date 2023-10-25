#include<iostream>
using namespace std;
void reverse(string &str,int i,int j)
{
    if(i>j){
        return;
    }
    swap(str[i++],str[j--]);
    reverse(str,i,j);
}
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    reverse(str,0,str.length()-1);
    cout<<"reverse string is"<<str<<endl;
    return 0;
}