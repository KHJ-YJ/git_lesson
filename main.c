#include <stdio.h>

int main() {
    printf("Hello, World!");
    int i = 0; 
    for(i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    if(i == 10) {
        printf("\nLoop completed successfully.");
    }
    return 0;
}