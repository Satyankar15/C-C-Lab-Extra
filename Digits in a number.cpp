#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cout<<"Enter number ";
    cin>>x;
    int num=floor(log10(x))+1;
    cout<<"Number of digits is "<<num<<endl;;
    cout<<"log10(x)= "<<log10(x)<<endl;
    cout<<"floor(8.9)= "<<floor(8.9);
}

