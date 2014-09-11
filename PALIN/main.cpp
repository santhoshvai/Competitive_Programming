#include <iostream>
#include <algorithm>
#include <cstring>
 
using namespace std;
 
void nextPlaindrome(char * num){
	int length = strlen(num);
	char originalNum[length];
	strcpy(originalNum, num);
	int left, right;
	if(length % 2) { // odd
		left = length/2;
		right = length/2;
	}
	else {
	left = length/2-1;
	right = length/2;
	}
	while(left >= 0 && right < length){
		if (num[left] != num[right]){
			if ( num[left] > num[right]){
				  num[right] = num[left]; //if 2313 => 2333 means greater
				}
				else{	
					num[right] = num[left] ; //if 2133 => 2113 // always gets lesser
				}
		}
		left--; right++;
	}
	if (strcmp(originalNum, num) < 0) //originalnum is less than the present number
			cout << num << endl;
	else{ //2112 has come
		if(length % 2) { // odd
		left = length/2;
		right = length/2;
		}
		else {
		left = length/2-1;
		right = length/2;
		}
		while(left >= 0 && right < length){
		if (num[left] != num[right]){
			throw 1; //cant be ! its a error
		}
		if (num[left] != '9' ) {
					num[left] = num[right] = num[left] + 1; //2112 => 2222 //808 => 818
					for ( int i=left + 1; i<right ; i++ ) num[i] = '0' ; //stay lesser! 
					//if 833338 is changed to 843348 => change to 840048
					break ; //stop the while or else 919 will come !
				}
		left--; right++;
		}
		if ( strcmp(originalNum, num) < 0 ) cout << num << endl; 
			else{ //9's left to do
				if ( num[0] == '9' ){ //99 => 101
					cout << '1' ;
					for ( int i=0 ; i<length-1 ; i++ )cout << '0' ;
					cout <<'1' ;
 
				}
				else{ // 1991 must send 2002
					cout << (char)(num[0]+1) ; //2
					for ( int i=0 ; i<length-2 ; i++ ) cout << '0' << endl;
					cout << (char)(num[0] + 1) ; //2
				}
				cout << endl;
			}
	}
}


int main() {
	int noOfCases;
	scanf("%d",&noOfCases);
	while(noOfCases--){
		char longDigitNumber[1000001];
		scanf("%s",&longDigitNumber);
		nextPlaindrome(longDigitNumber);
	}
return 0;
}
