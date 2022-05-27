#include <stdio.h>

int main (){
	
	int sayi1,sayi2;
	printf("Sayi 1'i Giriniz:\t");
	scanf("%d",&sayi1);
	printf("\nSayi 2'yi Giriniz:\t");
	scanf("%d",&sayi2);

	if(sayi2>sayi1){
		printf("Buyuk Olan Sayi=%d",sayi2);
		
	}	
	else if (sayi1>sayi2) {
		printf("Buyuk Olan Sayi=%d",sayi1);
	}
	return 0;
}
