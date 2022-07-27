#include <stdio.h>

void printString(char *s){
    for(char *p = s; *p!='\0'; p++){
        printf("[%p] = %c\n", p, *p);
    }
}
void encrypt(char *s){
    for(char *p = s; *p!='\0'; p++){
        *p += 1;
    }
}

int main(){
    char s[10];
    scanf("%s", &s[0]);
    printString(&s[0]);
    encrypt(s);
    printString(s);



    // int x = 100;
    // printf("value of x = %d\n", x);
    // printf("reference of x = %lu\n", &x);
    // printf("reference of x = %p\n", &x);
    // &x = 1004;
    
    // int data[10] = {1, 2, 3, 4, 5};
    // printf("data[0] = %d\n", data[0]);
    // printf("reference data[0] = %p\n", &data[0]);
    // printf("reference data = %p\n", data);

    // printf("data[5] = %d\n", data[5]);
    // printf("reference data[5] = %p\n", &data[5]);
    // printf("reference data = %p\n", data);
    // // 460 -> 474 = 0x14 => 16+4 = 20

    // printf("data[100] = %d\n", data[100]);
    // printf("reference data[100] = %p\n", &data[100]);

    // data[100] = 1;
    // printf("data[100] = %d\n", data[100]);
    // printf("reference data[100] = %p\n", &data[100]);
    // int a = 100;
    // int b = 0144;
    // int c = 0x64;
    // int d = 0b011101;
    // printf("%d %d %d %d\n", a, b, c, d);

    // int x = 100, data[10] = {1, 2, 3, 4, 5};
    // int *ptr;
    // ptr = &x;
    // int *arrPtr = data; // int *arrPtr = &data[0]

    // printf("value of ptr = %p\n", ptr);
    // printf("reference of ptr = %p\n", &ptr);
    // printf("value of reference *ptr = %d\n", *ptr);

    // printf("arrPtr = %p\n", arrPtr);
    // printf("*arrPtr = %d\n", *arrPtr);
    // arrPtr += 1; // 1*int, 1*char, 1*double
    // printf("arrPtr = %p\n", arrPtr);
    // printf("*arrPtr = %d\n", *arrPtr);
    // arrPtr++;
    // printf("arrPtr = %p\n", arrPtr);
    // printf("*arrPtr = %d\n", *arrPtr);

    // int x;
    // char s[10], c[3], t;

    // scanf("%d", &x);
    // scanf("\n%s", &c);
    // printf("result x = %d, c = %s",x, c);


}