#include <stdio.h>  
  
int main(void)  
{  
  int dec, remain = 0, bina = 0, place=1;
    scanf("%d", &dec);
  while(dec > 0){
    remain = dec %2;
    dec = dec / 2;
    bina = bina + (remain * place);
    place = place * 10;
  }
  printf("%d", bina);
  printf("\n");  
  return 0;
}  