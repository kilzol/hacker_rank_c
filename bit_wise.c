#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
 int And = 0;
    int Or = 0;
    int Xor = 0;

    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (((i&j) > And) && ((i&j) < k)) {
                And = i&j;
            }
            if (((i|j) > Or) && ((i|j) < k)) {
                Or = i|j;
            }
            if (((i^j) > Xor) && ((i^j) < k)) {
                Xor = i^j;
            }
        }
    }

    printf("%d\n%d\n%d\n", And, Or, Xor); 
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
