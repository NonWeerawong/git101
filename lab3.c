#include <stdio.h>
#include <stdlib.h>
/* ReturnType FuncionName(parameter){
    statement
    ...
    return ...;
    void = return;
}
*/
int x = 1000;
int addTen(int x){
    // printf("addTen x = %d\n", x);
    x = x+10;
    // printf("after added addTen x = %d\n", x);
    return x;
}

// Function header, Function Prototype
int addTwenty();

int main(){
    int x = 100;
    int y = addTen(x);
    // for(;;){
    //     printf("%d\n", y);
    // }
    double d = 10;
    // int i = 12.8; // underflow
    int i = (int)12.8;
    printf("%d",i);
    // printf("In main x = %d, y = %d\n",x ,y);
    // int z = addTwenty();
    // printf("In main2 x = %d, y = %d, z = %d\n", x, y, z);


}
int addTwenty(){
    // printf("addTwenty x = %d\n", x);
    x+=20;
    // printf("after added addTwenty x = %d\n", x);
    return x;
}

// int k, l;
// int i=0, j=0;
    // printf("%d %d %d %d\n", i, j, k, l);
    // while(i<10){
    //     printf("%d\n",i);
    //     i+=1;
    // }

    // while(1){
    //     printf("%d\n", i);
    //     i+=1;
    // }

    // for(int i=0; i<10; i++){
    //     printf("%d\n", i);
    // }