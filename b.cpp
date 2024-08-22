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
    int x=0,z=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            x+=i;
        }
    }
        for(int j=1;j<m;j++){
        if(m%j==0){
            z+=j;
        }
    }
    if(x==m&&z==n){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    return 0;
}