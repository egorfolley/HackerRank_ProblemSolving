#include <bits/stdc++.h>

int main()
{
    int n = 0;
    std::cin >> n;

    double pos = 0.0;
    double neg = 0.0;
    double zero = 0.0;

    int val = 0;
    for (int i = 0; i < n; ++i)
    {
      std::cin >> val;

      val == 0 ? zero++ : val > 0 ? pos++ : neg++;
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    
    std::cout << (pos / n) << std::endl;
    std::cout << (neg / n) << std::endl;
    std::cout << (zero / n) << std::endl;

    return 0;
}
