#include <stdio.h>

int main(){
    int n;
    int m;
    int i;
    int temp;
    int jumlah = 0;
    int temp2;
    scanf("%d %d", &n, &m);
    int B[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &B[i]);  
    }
    for ( i = 0; i < m; i++) {
        scanf("%d", &temp);
        for ( i = 0; B[i] != temp ; i++) {
            if (B[i] == temp) {
                break;
            }
            jumlah++;
        }
        do
        {
            temp2 = B[i-1];
            B[i-1] = B[i];
            B[i] = temp2;
            i--;
            jumlah++;
        } while (i != 0);
        temp = 0;
    }
    printf("%d", jumlah);
    return 0;
}