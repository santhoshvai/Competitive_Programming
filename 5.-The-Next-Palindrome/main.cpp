#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

//function to reverse a string
void reverse(char s[]) {
	int c, i , j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	return;
}
bool isPlaindrome(char * a){
	char b[strlen(a)+1];
	strcpy(b,a);
	reverse(a);
	if(strcmp(a, b) == 0) {
		return true;
	} else {
		return false;
	}
}

char * nextPlaindrome(char * longDigitNumber){
	int length = strlen(longDigitNumber);
	char temp[3];
	if(length % 2 != 0) temp[0] = longDigitNumber[int(length/2)];
	else {
		temp[0] =  longDigitNumber[int(length/2)-1] ;
		temp[1] = longDigitNumber[int(length/2)] ;
	}
	return temp;
	
}



int main() {
	int noOfCases;
	scanf("%d",&noOfCases);
	while(noOfCases--){
		char longDigitNumber[1000001];
		scanf("%s",&longDigitNumber);
		cout << nextPlaindrome(longDigitNumber) << endl;;
	}
	return 0;
}
