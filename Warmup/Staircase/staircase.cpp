#include <bits/stdc++.h>

int main()
{
  uint n = 0;
  std::cin >> n;

  for (int i = 1; i < n + 1; ++i)
    std::cout << std::string(n - i, ' ') << std::string(i, '#') << std::endl;

  return 0;
}
