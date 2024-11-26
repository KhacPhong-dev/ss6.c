#include<stdio.h>
int main(){
    int key= 123;
    int numb;
    do{
        printf("moi ban nhap mat khau:");
        scanf("%d", &numb);
        if(numb==key){
            printf("ban nhap dung mat khau roi\n");
        }else{
            printf("ban nhap sai mat khau roi\n");
        }
    }while(numb!=key);
}