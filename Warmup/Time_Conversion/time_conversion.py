#!/bin/python3

if __name__ == "__main__":
    s = input()
    hh, mm, ss = map(int, s[:-2].split(':'))
    p = s[-2]

    hh = int(hh) % 12 if p=='A' else int(hh) + 12 if (int(hh) != 12) else hh

    print("%02d:%02d:%02d" % (hh,mm,ss))
