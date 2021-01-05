#include <bits/stdc++.h>


std::deque<int> convert_line(std::string input_line)
{
  std::deque<int> n_input = {};
  std::istringstream iss(input_line);

  int n = 0;
  while (iss >> n)
    n_input.push_back(n);

  return n_input;
}

int equal_stacks(std::deque<int> &h1, std::deque<int> &h2, std::deque<int>h3)
{
  int h1_s = 0, h2_s = 0, h3_s = 0;
  for (auto& n : h1)
    h1_s += n;
  for (auto& n : h2)
    h2_s += n;
  for (auto& n : h3)
    h3_s += n;

  int min_h = 1;
  while(min_h > 0)
  {
    min_h = std::min(
      {h1_s, h2_s, h3_s});

    if (h1_s > min_h)
    {
      h1_s -= h1[0];
      h1.pop_front();
    }

    if (h2_s > min_h)
    {
      h2_s -= h2[0];
      h2.pop_front();
    }

    if (h3_s > min_h)
    {
      h3_s -= h3[0];
      h3.pop_front();
    }


    if (h1_s == h2_s && h1_s == h3_s)
      return h1_s;
  }

  return 0;
}

int main()
{
  std::string n = "";
  std::getline(std::cin, n);

  std::deque<int> n_input = convert_line(n);

  std::string h1_string = "";
  std::getline(std::cin, h1_string);
  std::deque<int> h1(n[0]);
  h1 = convert_line(h1_string);

  std::string h2_string = "";
  std::getline(std::cin, h2_string);
  std::deque<int> h2(n[1]);
  h2 = convert_line(h2_string);

  std::string h3_string = "";
  std::getline(std::cin, h3_string);
  std::deque<int> h3(n[2]);
  h3 = convert_line(h3_string);

  int height = equal_stacks(h1, h2, h3);
  std::cout << height << std::endl;

  return 0;
}
