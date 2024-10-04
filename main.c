#include <stdio.h>
int count;
int num;

int main(void){
    printf("How long will the game go?\n");
    scanf("%d", &count);
    while (num < count){
        printf("Duck\n");
        num += 1;
    }
    printf("Goose!");
    return 0;
}