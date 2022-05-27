#include <stdio.h>
void mutlak(int sayi1)
 { 
if(sayi1 < 0) {
    sayi1 = sayi1 * -1;
  }

  printf("%d", sayi1);
}
int main(){
  int sayi ;

printf("sayi gir:");
scanf("%d",&sayi);


mutlak(sayi);
  return 0;
}
