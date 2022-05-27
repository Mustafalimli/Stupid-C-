#include <stdio.h>
int main (){
	
	char c,K[4],B[4];
	int i,ks,bs;
	
	for (i=0 ;i<4; i++)
	{
		
		printf("karakter gir:");
		scanf("%c",c);
		if (c<= 'z' && c > 'a'){
			K[i]=c;
			ks++;
			
		}
		
		else if (c<='Z'&& c>= 'A'){
		B[i]=c;
		bs++;	
		
		}
	}
	
	printf("Kucukler:");
	for (i = 0; i<ks ; i++)
	printf("%c",K[i]);
	printf("buyukler");
	for(i=0 ; i<bs; i++)
	printf("%c",B[i]);
	printf("\n");
	return 0;
	
	
	
	
	
	return 0;
}
