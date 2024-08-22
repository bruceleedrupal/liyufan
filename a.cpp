#include <iostream>
using namespace std;
int main()
{
  int n, temp_i, reverse;
  int count = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    temp_i = i;
    reverse = 0;
    while (temp_i)
    {
      reverse = 10 * reverse + temp_i % 10;
      temp_i = temp_i / 10;

      if (reverse == i)
      {
        count++;
      }
    }
  }
  cout << count;
  cout << endl;
}


/**
* @runId: 32715
* @language: C++
* @author: 2024zzzx6
* @submitTime: 2024-06-25 20:18:02
*/