#include <stdio.h>
#include <stdlib.h>

int stringLength(char* str){
int j=0;
 while (*str != '\0')
{ if(*str !="") j++; 
 str++;}
  return j;
}
int NbrOccurrence(char* str,char X){
  int i=0;
   while(*str != '\0'){
   if(*str == X) i++;
    str++;}
    return i;
}


int main(){
 char str[]="Annaba";
 
 printf("the number of characters in Annaba is %d",stringLength(&str));
 printf("\nthe number of n's in Annaba is %d",NbrOccurrence(&str,'n'));

    return 0;
}
