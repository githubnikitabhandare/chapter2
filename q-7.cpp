#include<iostream>
using namespace std;
int main()
{
    int n,num;

    cout<<endl<<"Enter a Number :";
    cin>>n;

    num=n;

    if(num<0)
    {
        num=(-1)*num;
    }

    cout<<endl<<"The Absolute value of" <<n << "is" << num;
    return (0);
}