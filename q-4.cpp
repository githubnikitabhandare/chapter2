#include<iostream>
using namespace std;
int main()
{
    int num, orig, rev=0, rem;
    cout<<endl<<"Enter a Number: ";
    cin>>num;
    orig = num;
    while(num>0)
    {
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    if(orig==rev)
        cout<<endl<<"This number is equal to its Reverse";
    else
        cout<<endl<<"This number is not equal to its Reverse";

    return 0;
}