#include <stdio.h>
#include <math.h>
int main(){
    int m[6][6], a, y, p, q;
    
    for (a = 1; a < 6; a++) {
        for (y = 1; y < 6; y++) {
            scanf("%d", &m[a][y]);
            if (m[a][y] == 1) {
                p = abs(3 - a);
                q = abs(3 - y);
                printf("%d\n", p + q);
            }
        }
    }
    
    return 0;
}