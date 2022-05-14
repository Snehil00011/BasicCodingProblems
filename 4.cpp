#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int s,a,b,c,area;
    cout<<"Enter the length of the first side : "<<endl;
    cin>>a;
    cout<<"Enter the length of the second side : "<<endl;
    cin>>b;
    cout<<"Enter the length of the third side : "<<endl;
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt((s)*(s-a)*(s-b)*(s-c));
    cout<<"The area is : "<<area;
    return 0;
}