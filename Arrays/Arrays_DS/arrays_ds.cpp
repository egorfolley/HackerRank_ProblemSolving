#include <bits/stdc++.h>

int main()
{
  uint n = 0;
  std::cin >> n;

  std::vector<int> arr(n);

  int val = 0;
  for (int i = 0; i < n; ++i)
  {
    std::cin >> val;
    arr[n - i - 1] = val;
  }

  for (auto i : arr)
    std::cout << i << ' ';
  std::cout << std::endl;

  return 0;
}
