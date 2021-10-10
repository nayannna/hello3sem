#include <iostream>

using namespace std;
int Fib (int n)
{
    return (n > 2) ? Fib(n-1) + Fib(n-2): n = 1;
}


int main()
{
    int a;

    cout << "Введите чиселко: ";
    cin >> a;

    cout << Fib(a);

    return 0;
}
