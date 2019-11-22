#include<stdio.h>
int main(){
unsigned long int i = 1;
int count = 0;
while(i!=0){
    i=i<<1;
    count++;
}
printf("unsigned long int is sizeof %d bit. The max is %lu,the min is %lu",count,i-1,i);   
}