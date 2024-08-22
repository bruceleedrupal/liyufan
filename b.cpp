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
    int n;
    cin>>n;
    int x=n;
    for(int i=1;i<=n;i++){
        abc(x)=abc(x-1)+n;
    }
    cout<<abc(n);

    return 0;
}