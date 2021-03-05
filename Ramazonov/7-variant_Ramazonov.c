#include <stdio.h>

int main(){
    int n;
    int j, i;
    printf("Son kiriting: ");
    scanf("%d", &n);
    for(j = n; j > 0; j--){
        for(i = 0; i < j; i++){
            printf("%d ", i+1);
        }
        printf("\n");
    }
    return 0;
}
