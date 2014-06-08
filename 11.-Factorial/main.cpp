#include <iostream>
#include <cstdio>

int zfunc(int n){
    int ret = 0;
    while(n>=5)
    {
        ret += n/5;
        n /= 5;
    }
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



