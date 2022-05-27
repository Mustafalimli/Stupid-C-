#include <stdio.h>

int main (){
	
	int a,b,c,min,max;
	float ortalama;
printf("Lütfen 3 Sayi Giriniz");
scanf ("%d %d %d",&a,&b,&c);
ortalama = ((a+b+c)/3.0);
printf("sayilarin ortalamasý %f'dir",ortalama);
	
	if ( a < b ){
		
		a = min;
		b= max;
	}
	
	else {
		b=min;
		a=max;

	}
	
	if (c < min )
	c=min;
	
	else if ( c > max);
	c = max;
	
	printf("En Buyuk Sayi %d",max);
	printf("En Kucuk Sayi %d",min);
	
	
	
	
	
	
	
	
	return 0;
}
