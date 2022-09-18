#include<iostream>
using namespace std;
int main()
{
    int ram,shyam,ajay;

    cout<<endl<<"Enter the age of ram :";
    cin>>ram;

    cout<<endl<<"Enter the age of shyam :";
    cin>>shyam;

    cout<<endl<<"Enter the age of ajay :";
    cin>>ajay;

    if(ram<=shyam)
    {
        if(ram<=ajay)
        {
            cout<<endl<<"Ram is Yongest";
        }
        else
        {
            cout<<endl<<"Ajay is Youngest";
        }
    }
    else if(shyam<=ajay)
    {
        cout<<endl<<"Shyam is Yongest";
    }
    else
    {
        cout<<endl<<"Ajay is Youngest";
    }
    return (0);
}
