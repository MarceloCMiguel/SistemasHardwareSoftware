#include <stdio.h>

/* TODO: implemente sua função soma aqui */

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        for (int a = 1; a <= n; a++)
        {
            printf("%d ",i*a);
        }
        printf("\n");
        
    }
    
    return 0;
}