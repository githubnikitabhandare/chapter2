#include<iostream>
using namespace std;
int main()
{
    float area,length,breadth,perimeter;

    cout<<endl<<"Enter the length of rectangle :";
    cin>>length;

    cout<<endl<<"Enter the Breadth of rectangle :";
    cin>>breadth;

    area = length * breadth;
    perimeter = 2 * (length+breadth);

    cout<<endl<<"Area of rectangle :" <<area;
    cout<<endl<<"Perimeter of rectagle :"<<perimeter;

    if(area>perimeter)
    {
        cout<<endl<<"Area of rectangle is greater than its perimeter.";
    }
    else
    {
        cout<<endl<<"Perimeter of rectangle if greater than its area.";
    }
    return (0);
}