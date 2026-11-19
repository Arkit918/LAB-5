#include <stdio.h>
int main() {
    int arr[10];
    int sum = 0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }
    printf("\nSum of the 10 numbers = %d\n", sum);
}
