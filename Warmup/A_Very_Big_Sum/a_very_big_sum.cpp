#include <bits/stdc++.h>

int main()
{
  uint n = 0;
  std::cin >> n;

  std::vector<long> arr(n);

  long val = 0;
  while ( n-- )
  {
    std::cin >> val;

    arr.push_back(val);
  }

  std::cout << std::accumulate(arr.begin(), arr.end(), 0LL) << std::endl;

   return 0;
}
