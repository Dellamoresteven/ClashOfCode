import sys
import math

s=''.join([c for c in input()if c.isdigit()])
s = '0'+s[-11:]

print(f'{s[:3]} {s[3:6]} {s[6:9]} {s[9:]}')
