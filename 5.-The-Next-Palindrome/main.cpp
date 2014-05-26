#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>

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
	char* pChar;
	if(length % 2 != 0) {
		*pChar = malloc(sizeof(char));
		pChar = &longDigitNumber[int(length/2)];
	}
	else {
		*pChar = malloc(sizeof(char)+1);
		
		pChar = &longDigitNumber[int(length/2)-1] ;
		strncat (pChar, &longDigitNumber[int(length/2)], 2);
	}
	return pChar;
	
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
