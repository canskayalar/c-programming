#include <stdio.h>

int maxmin(int array[],int uzunluk){
    int max=array[0];
    int min=array[0];
    for(int i=1; i<uzunluk; i++){
    if(array[i]>max){
        max=array[i];
    }if(array[i]<min){
        min=array[i];
    }
    }
    printf("max : %d\n" , max);
    printf("min : %d" , min);
}
int main(){
    int array[5]={4,6,9,2,1};
    int uzunluk=sizeof(array)/sizeof(array[0]);
    maxmin(array,uzunluk);
}//cansu
