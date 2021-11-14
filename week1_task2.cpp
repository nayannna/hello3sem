/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "Емкость (Ф) в СИ";
    double x;
    cin >> x;
    cout << "Электрический заряд (Кл) в СИ";
    double y;
    cin >> y;
    double c{3*pow(10,10)};
    x=c*c*pow(10,-9);
    y=c*pow(10,-1);
    cout << "Емкость в СГС " << x << endl;
    cout << "Электрический заряд в СГС " << y << endl;
    return 0;
}
