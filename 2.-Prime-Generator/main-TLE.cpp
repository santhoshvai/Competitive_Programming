#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

#define SIZE 100000
bool primeBool[SIZE];

void generatePrimeBetween(const int num1, const int num2){
	int num1new = 2;
	if ( num1 > 2)
	    num1new  = (num1/2)*2;        
        int num2Range  = static_cast<int>(sqrt((double)num2));
	for(int i=num1;i<=num2;++i)
    		primeBool[i] = true;
 	for(int i=num1new;i<=num2Range;++i)
        	if(primeBool[i]==true)
                	for(int j=i*i;j<=num2;j=j+i)
                    		primeBool[j]=false;                     
 	for(int i=num1;i<=num2;++i)
    		if(primeBool[i] == true) cout << i << endl; 
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
		cout << endl;
	}
	return 0;
}
