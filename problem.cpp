#include <iostream>

using namespace std;

int main()
{
    int a, i = 0;
    cin >> a;
    do
    {
        a = a / 10;
        i++;
    } while (a != 0);
    cout << i;
}