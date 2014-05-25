#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//check if the number is a palindrome
bool isPalindrome(int number) {
    string str1 = to_string(number);
    string tempstr = str1;
    std::reverse(str1.begin(), str1.end()); //reverses the string
    if (tempstr.compare(str1) == 0)
       return true;
    return false;
}

// returns the next largest palindrome of a given number
int nextLargestPalindrome(int N) {
    for ( int i = N + 1; ; i++ ) {
        if ( isPalindrome( i ) ) 
            return i;
    }
}

int main() {
	int noOfCases;
	int n;
	scanf("%d",&noOfCases);
	while(noOfCases--){
		scanf("%d",&n);
		cout << nextLargestPalindrome(n) << endl;
	}
	return 0;
}
