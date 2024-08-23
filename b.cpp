#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=1;i<=n;i++){
        x+=i*i;
    }
    cout<<x;
    return 0;
}