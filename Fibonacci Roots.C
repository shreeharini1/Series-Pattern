#include<stdio.h>
int main(){
   int n;
   //printf("Enter the number of terms: ");
   scanf("%d",&n);
   if(n <=0){
       return 0;
   }
   int first = 0,second = 1,next,count = 1;
   //printf("Fibonacci series : ");
   do{
       if(count == 1){
           printf("%d", first);
       }
  else if(count ==2){
      printf("%d", second);
      }
  else{
      next = first + second;
      printf("%d",next);
      first = second;
      second = next;
  }
  count++;
   }
while(count <= n);
printf("\n");
return 0;
    
}
