#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k) {
  int maximumand = 0;
  int maximumor = 0;
  int maximumxor = 0;
  for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++) {
            if (((i|j) > maximumor) && ((i|j) < k)) {
                maximumor = i|j;
            }
            if (((i&j) > maximumand) && ((i&j) < k)) {
                maximumand = i&j;
            }
            if (((i^j) > maximumxor) && ((i^j) < k)) {
                maximumxor = i^j;
            }
        }
    }
    printf("%d\n%d\n%d\n", maximumand, maximumor, maximumxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
