#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

bool abc(int n)
{
    bool x = true;
    if (n <= 1)
    {
        x = false;
    }
    else if (n == 2)
    {
        x = true;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                x = false;
                break;
            }
        }
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    int x = -1;
    for (int i = 2; i < n; i++)
    {
        if (abc(i))
        {
            cout << i << " ";
            x++;
            if (x % 5 == 4)
            {
                cout << endl;
            }
        }
    }
    return 0;
}