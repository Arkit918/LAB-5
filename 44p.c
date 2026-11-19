#include <stdio.h>

int main() {
    int arr[10];
    int odd_count=0,even_count=0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("\nTotal Even elements: %d\n", even_count);
    printf("Total Odd elements: %d\n", odd_count);
}
