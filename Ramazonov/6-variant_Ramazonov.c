#include <stdio.h>

int main(){
    int n;
    int j, i;
    printf("Son kiriting: ");
    scanf("%d", &n);
    for(j = n; j > 0; j--){
        for(i = j; i > 0; i--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
