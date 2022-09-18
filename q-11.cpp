#include<iostream>
using namespace std;
int main()
{
    int x1, y1;
    cout<<endl<<"Enter the co-ordinates of point: ";
    cin>>x1>>y1;

    if(x1 == 0 && y1 !=0)
        cout<<endl<<"Point lies on y-axis"<<x1<<y1;
    else if (x1 !=0 && y1 == 0)
        cout<<endl<<"Point lies on x-axis"<<x1<<y1;
    else if (x1 == 0 && y1 == 0)
        cout<<endl<<"Point lies on the origin"<<x1<<y1;
    else
        cout<<endl<<"Point neither lie on x-axis nor on y-axis"<<x1<<y1;
    return 0;
}