
from sys import stdin
import array
stdin.readline() #ignore the first line

d = map(long, stdin.read().split()) #[4L, 2L, 123L, 43L, 324L, 342L, 0L, 12L, 9999L, 12345L]
a = array.array('L')
b = array.array('L')
a.fromlist(d[0::2]) #array('L', [4L, 123L, 324L, 0L, 9999L])
b.fromlist(d[1::2]) #array('L', [2L, 43L, 342L, 12L, 12345L])
c = array.array('L')
c.fromlist([x*y for x, y in zip(a, b)]) #array('L', [8L, 5289L, 110808L, 0L, 123437655L])
for x in c:
	print x
