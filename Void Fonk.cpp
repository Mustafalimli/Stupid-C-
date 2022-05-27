#include <stdio.h>


void hatayibas(int hata){
	
	
	printf("Hata Kodu %d",hata);
}

int main() {
	
	
	int sayi;
	printf("Negatif Olmayan Sayi Gir");
	scanf("%d",&sayi); 
	
		if (sayi < 0 ){
			
			hatayibas(404);
			
		}
	
		else  { 
			printf("Tebrikler iyi sayi girdin");
		}
	
	
	return 0;
}
