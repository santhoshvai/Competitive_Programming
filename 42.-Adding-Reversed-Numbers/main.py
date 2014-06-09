#!/usr/bin/env python

import sys

def reverseInt(n):
    return int(str(n)[::-1])
    
t = int(raw_input())
for i in range(t):
    strList = sys.stdin.readline().split()
    a = reverseInt(strList[0])
    b = reverseInt(strList[1])
    print reverseInt(a + b)
