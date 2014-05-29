int main()
{
int i=10;
char c;
while(i--){
int p=1;
while((c=getchar())>'@')
	{
	  p*=(c=='T'|c=='D'|c=='L'|c=='F')?2:1;
	}
  printf("%d\n",p);
  }
  return 0;
}
