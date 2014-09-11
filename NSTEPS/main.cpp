#include <cstdio>


using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    
    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);
        
        if (x != y && y+2 != x) { printf("No Number\n"); continue; }
        
        if (y%2 == 0) {
            printf("%d\n", x+y);
        } else {
            printf("%d\n", x+y-1);
        }
    }
    
    return 0;
}
