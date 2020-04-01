#include <bits/stdc++.h>

int main()
{
  std::vector<int> a(3);
  std::cin >> a[0] >> a[1] >> a[2];

  std::vector<int> b(3);
  std::cin >> b[0] >> b[1] >> b[2];

  uint sum_a = 0, sum_b = 0;
  for (uint i = 0; i < 3; ++i)
  {
    if (a[i] > b[i]) sum_a++;
    else if (a[i] < b[i]) sum_b++;
  }

  std::cout << sum_a << ' ' << sum_b << std::endl;

  return 0;
}
