#include <iostream>
using namespace std;
int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

int main()
{
  int m, n;
  cin >> m >> n;

  int x = gcd(m, n);

  int a = m / x;
  int b = n / x;
  cout << x << endl;

  return 0;
}
