#include <stdio.h>
#include <stdlib.h>

int npow(int n){
  int i;
  int result=1;
    for(i=0;i<n;i++){
      result*=n;
    }
    return result;
}
int main(){
  int n,i;
  printf("enter the number of numbers you want");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++){
    printf("\nenter your number");
    scanf("%d",&a[i]);
  }
   for(i=0;i<n;i++){
   a[i]=npow(a[i]);
   printf("%d\n",a[i]);
   
   }
   return 0;
}
