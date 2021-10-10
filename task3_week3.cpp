#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int n, unit;
    vector <int> array, array_incresing, array_decreasing;
    cout << "Количество элементов в массиве: ";
    cin >> n;
    cout << "Массив: ";
    for (auto i = 0; i < n; ++i)
    {
        cin >> unit;
        array.push_back(unit);
    }
    array_incresing = array;
    sort(begin(array_incresing), end(array_incresing));
    for (int i : array_incresing)
    {
        cout << i << '\n';
    }
    array_decreasing = array;
    sort(begin(array_decreasing), end(array_decreasing),
              [](int x, int y) {return x > y; });

    for (int i : array_decreasing)
    {
        cout << i << '\n';
    }

    return 0;
}


