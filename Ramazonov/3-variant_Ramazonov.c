#include <stdio.h>

int main(){
    int n, m = 1;
    int j, i;
    printf("Son kiriting: ");
    scanf("%d", &n);
    for(j = 0; j < n; j++){
        for(i = m; i > 0; i--){
            printf("%d ", i);
        }
        m++;
        printf("\n");
    }
    return 0;
}
