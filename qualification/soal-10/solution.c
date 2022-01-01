#include <stdio.h>
 
int main() {
   int i, j, Q, N, X, Y;
   scanf("%d", &Q);
   int budi[Q], dono[Q];
   for (i = 0; i < Q; i++) {
       budi[i] = 0, dono[i] = 0;
       scanf("%d %d %d", &N, &X, &Y);
       for (j = 1; j <= N ; j++) {
           if (j % X == 0 && j % Y == 0) {
               continue;
           } 
           j % X == 0 ? budi[i]++ : (j % Y == 0 ? dono[i]++ : '\0');
       }
   }
   for ( i = 0; i < Q; i++) {
       printf("%d %d\n", budi[i], dono[i]);
   }
   return 0;
}