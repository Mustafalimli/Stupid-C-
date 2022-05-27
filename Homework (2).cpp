#include <stdio.h>
int main(){
	int a;
	int A_i;
	int k,n;
	int dizi[a];
	int i;
	
	printf("N ve K Girin:");
	scanf("%d %d",&n,&k);	
	if(k<=0){
	
		printf("Gecersiz Girdi.");
		return 0;
	}
	else if (n<=0){
			printf("Gecersiz Girdi.");
			return 0;
	}
	else  {
		printf("A_i Giriniz:");
	}
	for(i=0;i<n;i++){
		scanf("%d",&dizi[a]);
		if(k = k-dizi[a]<=0){
			printf("Gecersiz Girdi.");	
			return 0;
		}
		
	 if (k-dizi[a]>=0){
		printf("1");
			k = k-dizi[a];
	}else if(k-dizi[a] < 0){

	printf("0");
}
	}
	
	
	
	
	
	
	
	
	return 0;
}
