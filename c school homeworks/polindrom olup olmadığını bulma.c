#include<stdio.h>

int main(){ 
    int sayi, ters=0, ters_sayi, kalan; 
    printf("Bir sayi giriniz : ");
    scanf("%d", &sayi);
    
    ters_sayi=sayi;
    
    while(ters_sayi>0){
    	kalan=ters_sayi%10;
    	ters_sayi=ters_sayi/10;
    	ters=(ters*10)+kalan;
	}

	if(ters==sayi){
		printf("Sayiniz polindromdur.");
		printf("\n%d",ters);
	}

	else{
		printf("Sayiniz polindrom degildir.");
		printf("\n%d",ters);
	}

	return(0);

}

