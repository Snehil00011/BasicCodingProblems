#include <iostream>
using namespace std;

int main()
{
    int a,n;
    cout<<"Enter the number you want multiplicaation table of: ";
    cin>>a;
    cout<<"Till how many factors you want the table i.e in 5 x 7 the factor is 7: ";
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        cout<<a<<" x "<<(i+1)<<" = "<<(a*(i+1))<<endl;
    }
    
    return 0;
}