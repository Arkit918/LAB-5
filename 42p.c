#include <stdio.h>

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int space=1; space<=4-i; space++) {
            printf(" ");
        }
        for (int star=1;star<=2*i-1;star++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=4-1;i>=1;i--) {
        for (int space=1;space<=4-i;space++) {
            printf(" ");
        }
        for (int star=1; star<=2*i-1;star++) {
            printf("*");
        }
        printf("\n");
    }
}
