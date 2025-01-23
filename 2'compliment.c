#include <stdio.h>

void onecomp(int a []){
    
    for
    (int i=0;i<16;i++){
        if(a[i]==0){
            a[i]=1;
        }
        else{
            a[i]=0;
        }
    }
    printf("One's Compliment is : ");
    for(int i=0;i<16;i++){
        printf("%d",a[i]);
        if(i%4==1){
            printf("\t");
        }
    }
    int carry=1;
    for (int i = 15; i==0; i--) {
        int sum = a[i] + carry;
        a[i] = sum % 2;
        carry = sum / 2;
    }
    printf("\n");
    printf("2's Compliment = ");
    for(int i=0;i<16;i++){
        printf("%d",a[i]);
        if(i%4==0){
            printf("\t");
        }
    }
}
int main() {
    int a[100];
    printf("Enter the 16 bit data = ");
    for(int i=0;i<16;i++){
        scanf("%d",&a[i]);
    }
    onecomp(a);
    printf("Try programiz.pro");
    
    return 0;
}