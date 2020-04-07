#include <bits/stdc++.h>

int main()
{
  uint n = 0;
  std::cin >> n;

  std::vector<int> candles(n);

  int max_el = 0;
  for (auto it = candles.begin(), end = candles.end(); it != end; ++it)
  {
    std::cin >> *it;

    max_el = max_el < *it ? *it : max_el;
  }

  std::cout << std::count(candles.begin(), candles.end(), max_el) << std::endl;

  return 0;
}
