#include <stdio.h>
int main() {
    int base, i, j, rows, cols, w, address;
    printf("Enter base address: ");
    scanf("%d", &base);
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter row and column index: ");
    scanf("%d %d", &i, &j);
    printf("Enter size of each element in bytes: ");
    scanf("%d", &w);
    address = base + ((i * cols) + j) * w;
    printf("Address in Row Major Order = %d", address);
    return 0;
}