#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m){
    for(int i=n;i>=1;i--){
        if(n%i==0&&m%i==0){
            cout<<i;
            break;
        }
    }
    }
    else{
        for(int i=m;i>=1;i--){
        if(n%i==0&&m%i==0){
            cout<<i;
            break;
        }
    }
    }
    return 0;
}