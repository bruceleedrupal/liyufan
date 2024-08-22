#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
bool abc(int n)
{
    bool x=true;
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

    
    int z = 0;
    for (int i = 100; i < 1000; i++)
    {
        z = i;
        
        int m=1000;

        while (abc(z))
        {
            z%=m;
            m/=10;
        }



        if(!m)
            cout<<i<<endl;
    }
    return 0;
}

/**
* @runId: 33081
* @language: C++
* @author: 2024zzzx6
* @submitTime: 2024-08-20 20:16:25
*/