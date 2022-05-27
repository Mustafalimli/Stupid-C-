#include <stdio.h>
#include <conio.h>
int main()
{
	while(1){
	int sayi1,sayi2;
	long sonuc;
	char islem;
	printf("HESAP MAKINESI \n");
	printf("Toplamak icin: +\nCikarmak icin: - \nBolmek icin  : / \nCarpmak icin : * \n");
	scanf("%c",&islem);
	if(islem=='+'){
		printf("Toplama islemi \n");
		printf("Lutfen birinci sayiyi giriniz: \t \a");
		scanf("%d",&sayi1);
		printf("Lutfen ikinci sayiyi giriniz : \t \a");
		scanf("%d",&sayi2);
		sonuc = sayi1 + sayi2;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='-'){
		printf("Cikarma islemi \n");
		printf("Lutfen birinci sayiyi giriniz: \t \a");
		scanf("%d",&sayi1);
		printf("Lutfen ikinci sayiyi giriniz : \t \a");
		scanf("%d",&sayi2);
		sonuc = sayi1 - sayi2;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='*'){
		printf("Carpma islemi \n");
		printf("Lutfen birinci sayiyi giriniz: \t \a");
		scanf("%d",&sayi1);
		printf("Lutfen ikinci sayiyi giriniz : \t \a");
		scanf("%d",&sayi2);
		sonuc = sayi1 * sayi2;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='/'){
		printf("Bolme islemi \n");
		printf("Lutfen birinci sayiyi giriniz: \t \a");
		scanf("%d",&sayi1);
		printf("Lutfen ikinci sayiyi giriniz : \t \a");
		scanf("%d",&sayi2);
		sonuc = sayi1 / sayi2;
		printf("sonuc = %d \n",sonuc);
	}
	getch();
	
	}
	
	
	
	return 0;
}
