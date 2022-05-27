#include <stdio.h>
 
 int faktoriyel (int sayi){
 	
 	int fact = 1;
 	
 	for (;sayi > 0; sayi--){
 		
 		fact=fact*sayi;
 		
	 }
	 return fact;
 }
 
 	


 int main (){
 	
 	int n;
 	
 	printf("Faktoriyel istediginiz sayiyi giriniz:");
 	scanf("%d",&n);
 	
 	printf("faktoriyel :  %d",faktoriyel(n));
 	
 	return 0;
 }
