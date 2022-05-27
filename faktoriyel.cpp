#include <stdio.h>

int main (){
	
	int n;
	int fakt;
	
	printf("Faktoriyelini Almak Ýstedigin Sayiyi Giriniz:");
	
	scanf("%d",&n);
	
	while (n != 0) {
		
		printf("%d\n",n);
		n--;
		
		fakt = fakt*n;
	}
	printf ("Faktoriyeli: %d",fakt);
	return 0;
}
