#include <iostream>
#include <cstdio>

int zfunc(const int n){
    int ret = 0;
    for (int p = 5; p <= n; p*=5)
        ret += n/p;
    return ret;
}

int main() {
// your code goes here
    int noOfTestCases;
    scanf("%d", &noOfTestCases);
    int num1; //smaller number
    while (noOfTestCases--) {
        scanf("%d",&num1);
        std::cout << zfunc(num1);
        std::cout << std::endl;
    }
return 0;
}
