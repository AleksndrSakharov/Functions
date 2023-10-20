#include <stdio.h>
#include <stdlib.h>
/*
<тип возвр. знач.> <имя функций>([<формальные переменные>]){
    <код функции>;
    return <возвр. знач.>;
}


<тип возвр. знач.> - void, int, char, unsigned long long...
[<формальные переменные>] - (int a), (int a, double b)...
(double arr[], int a, int b), ()
*/
void print(double arr[], int size);
int multy(int a, int b);



int main(){
    // double third = 1.0;
    // {
        // int first = 10, second = 11;
    // }
    double arr[] = {1, 2, 3, 4, 5, 6, 7};
    print(arr, sizeof(arr)/sizeof(double));
    int result123 = multy(50, 100);
    printf("%d\n",result123);
    // printf("%d %d %lf"), first, second, third;
    return 0;
}


void print(double arr[], int size){
    for(int i = 0; i < size; i++){
        printf("arr[%d] = %lf; ", i , arr[i]);
    }
    printf("\n");
}
int multy(int a, int b){
    int res  = a * b;
    return res;
}