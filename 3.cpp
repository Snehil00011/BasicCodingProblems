#include <iostream>
using namespace std;

int main()
{
    int a,b;//eg a=4,b=6
    cout<<"Enter the number to be swapped : ";
    cin>>a>>b;
    a=a+b;//a=4+6=10
    b=a-b;//b=10-6=4
    a=a-b; //a=10-4=6
    cout<<"Swapped value without using third variable is : "<<a<<" "<<b;
    return 0;
}   