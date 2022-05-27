#include <stdio.h>
int main (){
	
	int sayi[10];
	int i;
	int toplam;

	
	for (i = 0 ; i<10; i++)
	{
		printf("Sayi Gir:");
		scanf("%d",&sayi[i]);
		toplam = sayi[i];
	}
	printf("toplam: %d\n",toplam);
	return 0;
}
