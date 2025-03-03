#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i=1;
    while(i <=n){
        char ch ='A'+(n-i);
        int j=1;
        while(j<=i){
            printf("%c",ch);
            j++;
        }
   printf("\n");
   i++;
    }
    return 0;
}
