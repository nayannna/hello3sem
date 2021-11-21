/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,x1,x2,x,d;
    cin >> a >> b >> c;
    d = b*b-4*a*c;
    if (d>0){
        x1=(-b+ sqrt(d))/(2*a);
        x2=(-b- sqrt(d))/(2*a);
    cout << x1;
    cout << x2;
    }
    if (d==0){
        x=-b/(2*a);
        cout << x;
    }
    if (d<0){
        cout << " в уравнении нет действительных корней";
    }

}

