#include <cstdio>

void fact(int num)
{
    int i,k=0,j,carry=0,arr[1000]={1};
    for(i=1;i<=num;i++)
    {
            for(j=0;j<=k;j++)
            {
                arr[j]=arr[j]*i+carry;
                carry=arr[j]/10;
                arr[j]=arr[j]%10;
            }
            while(carry)
            {
                 k++;
                 arr[k]=carry%10;
                 carry/=10;
            }
    }
        for(i=k;i>=0;i--)
            printf("%d",arr[i]);
}

int main() {
    int no;
    scanf("%d", &no);
    int n;
    while (no--) {
        scanf("%d",&n);
        fact(n);
        printf("\n");
    }
return 0;
}
