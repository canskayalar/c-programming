
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int sayi1;
printf("0-50 arasinda bir sayi gir : ");
scanf("%d" , &sayi1);

srand(time(NULL));
int sayi2=rand() %51;
while (sayi1!=sayi2)
{
  if (sayi1<sayi2){
    printf("daha buyuk bir sayi gir : ");
    scanf("%d" , &sayi1);
}else{

    printf("daha kucuk bir sayi gir : ");
    scanf("%d" , &sayi1);
}}

if (sayi1==sayi2)
{
    printf("tebrikler buldunuz!");

}}

