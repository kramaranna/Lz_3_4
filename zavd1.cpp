#include<iostream>
#include <cmath>
using namespace std;

int main() 
{
    long int i=10, s=0;
        while (i<=100)
        {
            i=i+1;
          s=s+i*i;
        }
    cout<<"\nСума квадратів від 10 до 100: "<<s;
    return 0;
}
