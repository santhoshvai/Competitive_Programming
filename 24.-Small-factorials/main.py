
cache = {}

#recursive implementation
def fact(n):
    if n in memo:
        return memo[n]
    if n == 0:
        return 1
    else:
        ans = n * fact(n-1)
        cache[n] = ans
        return ans

t = int(raw_input())
for i in range(t):
    n = int(raw_input())
    print fact(n)
