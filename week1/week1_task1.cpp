/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << "Enter product's name.\n";
    string product_name;
    cin >> product_name;
    cout << "Enter product's price.\n";
    int product_price;
    cin >> product_price;
    cout << "Cash-back is available for this product. Is it true or false?\n";
    bool cash_back;
    cin >> boolalpha >> cash_back;
    cout << "Enter maximum storing temperature\n";
    int temperature;
    cin >> temperature;
    cout << product_name << '\n';
    cout << "Product's  price:..........";
    cout << uppercase << hex << product_price << '\n';
    cout << "Has cash-back:.......";
    cout << boolalpha << cash_back << '\n';
    cout << "Maximum storing temperature:......";
    cout << dec << showpos << temperature;
    return 0;
}