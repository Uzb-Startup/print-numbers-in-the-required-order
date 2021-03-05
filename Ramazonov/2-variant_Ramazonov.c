#include <stdio.h>

int main(){
    int n;
    int j, i;
    printf("Son kiriting: ");
    scanf("%d", &n);
    for(j = 0; j < n; j++){
        for(i = 0; i <= j; i++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
    return 0;
}
