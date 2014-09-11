int main()
{
int i=10; //10 cases
char c;
while(i--){
int p=1;
while((c=getchar())>'@')
	{
	  p*=(c=='T'|c=='D'|c=='L'|c=='F')?2:1; // 1* 1 if not occuring // 1*2 if occuring 
	}
  printf("%d\n",p);
  }
  return 0;
}
