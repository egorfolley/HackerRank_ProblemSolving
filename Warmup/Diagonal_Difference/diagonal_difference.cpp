#include <bits/stdc++.h>

int main()
{
  uint n = 0;
  std::cin >> n;

  uint sum1 = 0, sum2 = 0;

  std::vector<int> line(n);
  for (int i = 0; i < n; ++i)
  {
    for(auto it = line.begin(), end = line.end(); it != end; ++it)
      std::cin >> *it;

    sum1 += line[i];
    sum2 += line[n - i - 1];
  }

  std::cout << abs(sum1 - sum2) << std::endl;

  return 0;
}
