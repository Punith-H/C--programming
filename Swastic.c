#include <stdio.h>

int main() {
    int n = 11; 
    int a = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (
                (i == 0 && (j == 0 || j >= a)) ||                
                (i < a && (j == 0 || j == a)) ||             
                (i == a) ||                                     
                (i > a && i < n - 1 && (j == a || j == n - 1)) || 
                (i == n - 1 && (j <= a || j == n - 1))           
            )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
