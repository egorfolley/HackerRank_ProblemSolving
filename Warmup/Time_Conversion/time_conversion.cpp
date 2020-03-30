#include <bits/stdc++.h>

int main()
{
  // hh:mm:ssAM(PM)
  uint hh, mm, ss;
  char p;

  scanf("%d:%d:%d%c", &hh, &mm, &ss, &p);

  // hh = (p == 'A' ? (hh) % 12 : hh + 12);
  if (p == 'A') hh %= 12;
  else
    if (hh != 12) hh += 12;

  printf("%02d:%02d:%02d", hh, mm, ss);

  return 0;
}
