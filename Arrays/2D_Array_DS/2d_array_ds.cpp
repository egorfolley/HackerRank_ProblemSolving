#include <bits/stdc++.h>

int main()
{
  std::vector<std::vector<int>> mat;
  std::vector<int> line(6);
  for (int i = 0; i < 6; ++i)
  {
    for(auto it = line.begin(), end = line.end(); it != end; ++it)
      std::cin >> *it;

      mat.push_back(line);
  }

  int max_sum = -9 * 9, sum = 0, j_row = 0;
  for (int i = 0; i < 4; ++i)
  {
    sum = 0;
    for (int j = j_row; j < j_row + 3; ++j)
    {
      sum += mat[i][j];
      if (j == j_row) sum += mat[i + 1][j_row + 1];
      sum += mat[i + 2][j];
    }

    j_row = j_row < 3 ? j_row + 1 : 0;
    if (max_sum < sum) max_sum = sum;
    if (j_row != 0) i--;
  }

  std::cout << max_sum << std::endl;

  return 0;
}
