#include <stdio.h>
int main (){
	int a[5],i,sayi;
	printf("5 sayi giriniz:");
	for (i=0;i<5; i++){
		scanf("%d",&a[i]);
	}
	for( i=4;i>=0;i--){
		printf("%d\n",a[i]);
		
	}
	
	return 0;
}
