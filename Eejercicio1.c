#include <stdio.h>
int main (){
    int n, i;
    printf ("ingresa un nùmero natural\n");
    scanf("%d", &n);
    i= 1;
    while (i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
