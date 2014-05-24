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
	for (int i=0; i<noOfTestCases; ++i){
		int num1, num2;
		scanf("%d %d",&num1,&num2);
		generatePrimeBetween(num1, num2);
	}
	return 0;
}
