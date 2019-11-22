#include<stdio.h>
int main(){
    printf("请输入一段字符(不超过50个字符)\n");
    char c[50];
    int i = 0;int words = 0;int b = 0;
    while((c[i]= getchar()) != '\n'){
        i++;
    }
    for(b = 0;b<i;b++)
    {
        if(c[b]>='A'&&c[b]<='Z')
    }
    printf("the number of words: %d\n",words);
    return 0;
}