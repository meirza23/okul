/* n e kadar olan sayýlarýn karelerinin toplamý*/

#include <stdio.h>

int main(void){

    int sayac;
    int n;
	int toplam=0;
	
    printf("Hangi sayiya kadar olan sayilarin karelerinin toplamini bulmak istediginizi yaziniz:\n");
    scanf("%d",&n);

	for(sayac=1;sayac<n;sayac++){
		toplam=toplam+(sayac*sayac);
	}
    
    printf("Toplam:%d",toplam);
    
    getch();
    
    return (0);
}
