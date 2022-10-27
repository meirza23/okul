#include <stdio.h>

int main(void){

    int sayi=1;
    int n;

    printf("Kaca kadar tek sayilari girmek istediginizi yaziniz:\n");
    scanf("%d",&n);
	printf("Tek sayilar:\n");
	
    while(sayi<n){
        if(sayi%2==1){
        printf("%d\n",sayi);
        }
    sayi++;
    }
    
    getch();
    return (0);
}
