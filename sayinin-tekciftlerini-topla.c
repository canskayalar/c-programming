#include <stdio.h>

int tektoplam(int n){
    int toplam=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            if(i%2!=0){
                toplam+=i;
            }

        }
    }return toplam;

}
int cifttopolam(int n){
    int toplam=0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            if(i%2==0){
                toplam+=i;
            }
        }

    }return toplam;
}
int main(){
    int a=10;
    printf("teklerinin toplami : %d\n" , tektoplam(a));
    printf("ciftlerinin toplami : %d" , cifttopolam(a));
}
