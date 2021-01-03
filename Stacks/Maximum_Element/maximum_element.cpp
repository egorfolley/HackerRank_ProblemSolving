#include <bits/stdc++.h>

int main()
{
  int N = 0;
  std::cin >> N;

  std::vector<int> stack = {0};
  while (N--)
  {
    int type = 0, x = 0;
    scanf("%d", &type);

    switch (type) {
      case 1:
        scanf("%d", &x);

        x = std::max(x, stack.back());
        stack.push_back(x);

        break;
      case 2:
        stack.pop_back();

        break;
      case 3:
        std::cout << stack.back() << std::endl;

        break;
    }
  }

  return 0;
}
