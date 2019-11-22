#include<stdio.h>
int main(){
    printf("请输入一段字符(不超过50个字符)\n");
    char c[50];
    int i = 0;int b = 0;int words = 1;
    while((c[i]= getchar()) != '\n')
    {
        i++;
    }
    for(b = 0;b<i;){
        if((c[b]>='A'&&c[b]<='Z')||(c[b]>='a'&&c[b]<='z')){
            b++; 
            
            }
            
            else{
            words++;
            b++;
        }
    }
    printf("The number of words: %d\n",words);
    return 0;
    }