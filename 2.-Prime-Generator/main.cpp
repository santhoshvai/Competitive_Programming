#include <iostream>
using namespace std;

void generatePrimeBetween(int num1, int num2){
 cout << "TODO: Generate Prime numbers between " << num1 << " and "
 	<< num2 << endl; 
}

int main() {
	// your code goes here
	int noOfTestCases;
	scanf("%d", &noOfTestCases);
	int num1; //smaller number
	int num2; // larger number
	while (noOfTestCases--) {
		scanf("%d %d",&num1,&num2);
		generatePrimeBetween(num1, num2);
	}
	return 0;
}
