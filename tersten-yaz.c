#include <stdio.h>
#include <string.h>

int main(){
    char word[100];
    printf("kelime : ");
    scanf("%s" , word);
    int uzunluk=strlen(word);
    for(int i=uzunluk-1; i>=0; i--){
        printf("%c" , word[i]);

    }printf("\n");
    printf("%d" , uzunluk);
}
