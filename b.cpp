#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
//liyufan
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
    for(int i=100;i<1000;i++){
        int temp=i;
        while (temp)
        {
            if(!(abc(temp))){
                temp/=10;
            }
            else{
                break;
            }
        }
        if(temp==0){
            cout<<i<<endl;
        }
    }
    return 0;
}