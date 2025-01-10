#include <stdio.h>
int main(){
    int a,b;
    scanf("%c",&a);                 
    printf("%d",a);                         //Character to ASCII
    scanf("%d",&b);
    printf("%c",b);                         //ASCII to Character
    printf("hello \a world");
    return 0;
}