#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int fenzi(int n){
    if(n==1||n==2){
        return 1;
    }
    else{
        return fenzi(n-1)+fenzi(n-2);
    }
}

int fenmu(int n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else{
        return fenmu(n-1)+fenmu(n-2);
    }
}


int main()
{
    int n;
    cin>>n;

    double  x=0;
    for(int i=1;i<=n;i++){
        x+=(double)fenzi(i)/fenmu(i);
    }
    
    cout<<fixed<<setprecision(3)<<x;

    return 0;
}