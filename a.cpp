#include <iostream>
using namespace std;
int main()
{
  int i=0;
  int z=1;
  int sum=0;
  while (1)
  {
    z+=i;
    // cout<<z<<" ";
    sum+=z;
    i++;
    if(sum>=5000){
      break;
    }
  }
  // cout<<endl;
  cout<<sum;
  
}