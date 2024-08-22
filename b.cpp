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
    cin>>n;
    int x=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            x+=i;
        }
    }
    if(x==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}