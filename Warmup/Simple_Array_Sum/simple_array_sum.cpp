#include <bits/stdc++.h>

int main()
{
  uint n = 0;
  std::cin >> n;

  int i = 0;
  int sum = 0;
  while ( n-- )
  {
    std::cin >> i;

    sum += i;
  }

  std::cout << sum << std::endl;

  return 0;
}
