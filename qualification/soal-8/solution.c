#include <stdio.h>
 
int main() {
    int i, j, Q;
    scanf("%d", &Q);
    int N[Q], X[Q], Y[Q], budi[Q], dono[Q];
    for (i = 0; i < Q; i++) {
        scanf("%d %d %d", &N[i], &X[i], &Y[i]);
    }
    for (i = 1; i <= Q ; i++) {
        if (N[i] % X[i] == 0 && N[i] % Y[i] == 0) {
            continue;
        } else if (N[i] % X[i] == 0) {
            budi[i]++;
        } else if (N[i] % Y[i] == 0) {
            dono[i]++;
        }
    }
    for ( i = 0; i < Q; i++) {
        printf("%d %d\n", budi[i], dono[i]);
    }
    return 0;
}