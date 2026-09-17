#include <stdio.h>
int main()
{
    int row, col;
    int k, w;
    int offset;
    printf("Enter Row index: ");
    scanf("%d", &row);
    printf("Enter Column index: ");
    scanf("%d", &col);
    printf("Enter k (N = 2^k): ");
    scanf("%d", &k);
    printf("Enter w (Element Size = 2^w bytes): ");
    scanf("%d", &w);
    offset = ((row << k) + col) << w;
    printf("\nOffset = %d\n", offset);
    return 0;
}
