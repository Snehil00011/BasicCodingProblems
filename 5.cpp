#include <iostream>
using namespace std;

int main()
{
    int a,b,r;
    cout<<"Enter the two known angles of a triangle : "<<endl;
    cin>>a>>b;
    r=(180-(a+b));
    cout<<"The third angle is : "<<r;
    return 0;
}