#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the number to be swapped : ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<endl<<"swapped values are "<<a<<" "<<b;
    return 0;
}