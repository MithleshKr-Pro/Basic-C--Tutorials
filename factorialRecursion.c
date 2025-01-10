#include <stdio.h>
int factoFunc(int);
int main(){
    int n,R;
    scanf("%d",&n);
    R=factoFunc(n);
    printf("result = %d",R);
    return 0;
}
int factoFunc(int n){
        if(n==0){
            return 1;
        }else{
            return n*factoFunc(n-1);
        }
}