#include <stdio.h>

int main(void){

    int birincisayi = 1;
    int ikincisayi = 1;
    int i;
    int temp;

    printf("%d\n%d",birincisayi,ikincisayi);

    for(i = 0; i < 12; i++){

        temp=ikincisayi;
        ikincisayi=birincisayi+ikincisayi;
        birincisayi=temp;

        printf("\n%d",ikincisayi);
    }
    return (0);

}