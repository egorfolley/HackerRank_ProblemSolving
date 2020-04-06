#include <bits/stdc++.h>

int main()
{
  unsigned long int sum = 0;
  unsigned long int min_el = ULONG_MAX;
  unsigned long int max_el = 0;

  std::vector<unsigned long int> arr(5);
  for (auto it=arr.begin(), end=arr.end(); it != end; ++it)
  {
    std::cin >> *it;
    sum += *it;

    min_el = std::min(min_el, *it);
    max_el = std::max(max_el, *it);
  }

  std::cout << sum - max_el << ' ' << sum - min_el << std::endl;

  return 0;
}
