#include <stdio.h>

int main ()
{

int sayi1,sayi2,toplam;

	
	printf("Sayi1'i giriniz:");
	scanf("%d",&sayi1);
	printf("Sayi2'i giriniz:");
	scanf("%d",&sayi2);
	toplam=sayi1+sayi2;
 
 if (toplam == 2){
 		printf("Sayi =%d' good ",toplam);
 }
 else {
 
 printf("%d",toplam);
}

	return 0;
}
