#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int abc(int n){
    if(n==1||n==2){
        return 1;
    }
    else{
        return abc(n-1)+abc(n-2);
    }
}
int main()
{
    long long n;
    cin>>n;
    cout<<abc(n);

    return 0;
}