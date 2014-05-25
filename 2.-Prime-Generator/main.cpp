#include<iostream>
#include<math.h>
#include<stdlib.h>

int prime[10000],primes;

void init_primes(){
     static bool isprime[32000];
     int i,j;
     for(i=2;i<32000;i++) isprime[i]=true;
     for(i=2;i*i < 32000;i++)if(isprime[i])
     {
         for(j=2*i;j<32000;j+=i) isprime[j]=false;        
     }
     primes=0;
     for(i=2;i<32000;i++)
        if(isprime[i]) 
            prime[primes++]=i;
}

bool seive[100001];

void find_seive(int lo, int hi){
   int i,j,p,n;
   for(i=0; i<=hi-lo; i++) 
       seive[i]=true;
   for(j=0;;j++){
       p=prime[j];
       if(p*p > hi) break;
       n = (lo/p)*p;
       if(n<lo) n+=p;
       if(n==p) n+=p;
       for(;n<=hi; n+=p) 
          seive[n-lo]=false;         
   }  
}


void generatePrimeBetween(int lower, const int upper){
	if(lower<2) lower=2;
	find_seive(lower,upper);
         for(int i=0; i<=upper-lower; i++)
            if(seive[i]){
               cout << lower+i << endl;
            }   
}

int main(){
	init_primes();
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
