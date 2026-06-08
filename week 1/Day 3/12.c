// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b, i;
    printf("enter two number:");
    scanf("%d and %d",&a,&b);
    for(i=1;i<=a*b;i++){
        if(i%a==0 && i%b==0) {
            printf("LCM is %d",i);
            break;
        }
    }

    return 0;
}
