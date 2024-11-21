#include <stdio.h>

int main() {
    int i = 1;

    printf("Series: ");
    while (i <= 10) {
        printf("%d %d ", i, i * 5);
        i++;
    }

    printf("\n");
    return 0;
}
