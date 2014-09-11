#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

string int2str(int Number){
    ostringstream convert;   // stream used for the conversion
    convert << Number;      // insert the textual representation of 'Number' in the characters in the stream
    return convert.str(); // return the contents of the stream         
}

bool isPalindrome(int number) {
    string  str1 = int2str(number);
    string tempstr = str1;
    std::reverse(str1.begin(), str1.end());
    if (tempstr.compare(str1) == 0)
       return true;
    return false;
}

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
