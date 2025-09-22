#include<iostream>
#include <cmath>
using namespace std;

int main() 
{
    double i=1, a=1, b=6, k, x, y, h;
    cout<<"\nВведіть k: ";
    cin>>k;
    h=(b-a)/k;
        for (i=a; i<=b; i=i+1)
        {
          x=a+i*h;
          y=cos(x*x+4*log(x));
          cout<<"\n Координати "<<i<<": "<<"("<<x<<";"<<y<<")";
        }
    return 0;
}
