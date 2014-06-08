#include <cstdio>

long fact(int n)
{
  int c;
  long result = 1;
  for (c = 1; c <= n; c++)
    result = result * c;
  return result;
}

int main() {
    int no;
    scanf("%d", &no);
    int n;
    while (no--) {
        scanf("%d",&n);
        printf("%ld\n", fact(n) );
    }
return 0;
}

