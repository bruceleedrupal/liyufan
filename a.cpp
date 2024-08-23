#include <iostream>
using namespace std;
long long gcd(long long a, long long b)
{
  if (b == 0)
  {
    return a;
  }
  return gcd(b, a % b);
}

int main()
{
  long long m, n;
  cin >> m >> n;

  long long greatest_common_divisor = gcd(m, n);

  long long max_side_length_m = m / greatest_common_divisor;
  long long max_side_length_n = n / greatest_common_divisor;
  cout << greatest_common_divisor << endl;

  return 0;
}
