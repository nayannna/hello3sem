/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout << "Введите переменную x";
    int x;
    cin >> x;
    cout << "Введите переменную y";
    int y;
    cin >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << " x=" << x << " y=" << y << endl;
    return 0;
}
