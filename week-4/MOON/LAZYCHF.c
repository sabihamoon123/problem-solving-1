#include <stdio.h>

int main(void) {
    int x ,m, d, t ;
    scanf("%d", &t) ;
    for(int i = 1 ; i<=t ; i++){
        scanf("%d %d %d", &x, &m, &d) ;
        if(x*m<x+d){
            printf("%d\n", x*m) ;
        }
        else{
        printf("%d\n", x+d) ;
        }
    }

    return 0;
}