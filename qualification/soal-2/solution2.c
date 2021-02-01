#include <stdio.h>
typedef long long int ll;
typedef long int l;
void tukar(l *a, l *b)
{
    l temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    l n, m;
    l cari;
    l flag;
    l jumlah = 0;
    scanf("%ld %ld", &n, &m);
    l buku[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%ld", &buku[i]);
    }
    for (int i = 0; i < m; i++)
    {
        scanf("%ld", &cari);
        for (int j = 0; j < n; j++)
        {
            l tanda = 0;
            if (cari == buku[j])
            {
                tanda = j;
                while (buku[0] != cari)
                {
                    tukar(&buku[tanda], &buku[tanda - 1]);
                    tanda--;
                }
                flag = j;
                break;
            }
        }
        jumlah += (flag + flag);
    }
    printf("%d", jumlah);
    return 0;
}