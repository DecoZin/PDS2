#include <iostream>
int main(){

    // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
    int a = 10;

    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo
    int *ptr_a = nullptr;

    // 3) Declare um vetor de inteiros e inicialize com valores de 9 a 0 (nessa ordem)
    int v[10] = {9,8,7,6,5,4,3,2,1,0};

    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    std::cout << &a << std::endl;

    // 5) Imprima o VALOR da variável declarada em (1)
    std::cout << a << std::endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    std::cout << &ptr_a << std::endl;

    // 7) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr_a << std::endl;

    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    std::cout << &v << std::endl;

    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    std::cout << &v[0] << std::endl;

    // 10) Imprima o VALOR da primeira posição da variável declarada em (3)
    std::cout << v[0] << std::endl;

    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ptr_a = &a;

    // 12) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr_a << std::endl;

    // 13) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *ptr_a << std::endl;

    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do VALOR de (2)
    if( &a == ptr_a){
        std::cout << 1 << std::endl;
    }

    // 15) Coloque o VALOR '5' no ENDEREÇO apontado por (2)
    *ptr_a = 5;

    // 16) Imprima o VALOR da variável declarada em (1)
    std::cout << a << std::endl;

    // 17) Atribua o ENDEREÇO da variável (3) à variável declarada em (2)
    ptr_a = &v[0];

    // 18) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr_a << std::endl;

    // 19) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *ptr_a << std::endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável declarada em (2)
    ptr_a = &v[0];

    // 21) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr_a << std::endl;

    // 22) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *ptr_a << std::endl;

    // 23) Multiplique todos os valores do vetor declarado em (3) por '10', porém manipulando apenas a variável (2)
    for(int i = 0; i<10; i++){
        ptr_a = &v[i];
        *ptr_a = *ptr_a * 10;
    }

    // 24) Imprima os elementos de (3) a partir variável do vetor utilizando a notação [] (colchetes)
    for(int i = 0; i<9; i++){
        std::cout << v[i] << " ";
    }
    std::cout << v[9] << std::endl;

    // 25) Imprima os elementos de (3) a partir variável do vetor utilizando a notação ponteiro/deslocamento
    for(int i = 0; i<9; i++){
        std::cout << *(v + i) << " ";
    }
    std::cout << *(v + 9) << std::endl;

    // 26) Imprima os elementos de (3) utilizando a variável (2) e a notação ponteiro/deslocamento
    ptr_a = &v[0];
    for(int i = 0; i<9; i++){
        std::cout << *(ptr_a + i) << " ";
    }
    std::cout << *(ptr_a + 9) << std::endl;

    // 27) Atribua o ENDEREÇO da quinta posição de (3) à variável declarada em (2)
    ptr_a = &v[4];

    // 28) Imprima o VALOR da variável declarada em (2)
    std::cout << ptr_a << std::endl;

    // 29) Imprima o VALOR guardado no ENDEREÇO apontado por (2)
    std::cout << *ptr_a << std::endl;

    // 30) Imprima o VALOR guardado no ENDEREÇO do ponteiro (2) decrementado de 4
    std::cout << *(ptr_a-4) << std::endl;

    // 31) Declare um ponteiro para ponteiro e o inicialize com o ENDEREÇO da variável (2)
    int **ppp_a = &ptr_a;

    // 32) Imprima o VALOR da variável declarada em (31)
    std::cout << ppp_a << std::endl;

    // 33) Imprima o ENDEREÇO da variável declarada em (31)
    std::cout << &ppp_a << std::endl;

    // 34) Imprima o VALOR guardado no ENDEREÇO apontado por (31)
    std::cout << *ppp_a << std::endl;

    // 35) Imprima o VALOR guardado no ENDEREÇO do ponteiro apontado por (31)
    std::cout << **ppp_a << std::endl;
    
    return 0;
}