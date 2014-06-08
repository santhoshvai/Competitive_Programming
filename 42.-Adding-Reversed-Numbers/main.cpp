#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

#define SIZE 100000
bool primeBool[SIZE];

int rev(int num){
int reminder = 0;	
int rev = 0;
	while(num != 0)
{
    reminder = num % 10;
    rev = rev * 10 + reminder;
    num = num / 10;
}
return rev;
}

void getRevAdd(const int num1, const int num2){
	int sum = rev(num1) + rev(num2);
	cout << rev(sum);
}

int main() {
// your code goes here
int noOfTestCases;
scanf("%d", &noOfTestCases);
int num1; //smaller number
int num2; // larger number
while (noOfTestCases--) {
scanf("%d %d",&num1,&num2);
getRevAdd(num1, num2);
cout << endl;
}
return 0;
}
