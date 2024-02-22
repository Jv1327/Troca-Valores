#include <stdio.h>

void trocaValores(int* num1, int* num2){
    int aux = *num1;
    *num1 = *num2;
    *num2 = aux;
}

int main(void) {
    int a = 10;
    int b = 20;
    int c = 140;
    int d = 30;
    int e = 10;
    int f = 30;
    int g = 140;
    int h = 30;
    
    trocaValores(&a, &b);
    trocaValores(&c, &d);
    trocaValores(&e, &f);
    trocaValores(&g, &h);
}
