#include "vector.h"
#include <stdio.h>

int main(){
    int size,value;
    printf("Let's create a vector!\nInput size: ");
    scanf("%d", &size);
    printf("Input Value: ");
    scanf("%d", &value);
    int v[size];
    fill(v,size,value);
    printf("Your vector: ");
    printf("[");
    int i;
    for(i=0; i<size; i++){
        printf(" %d ",v[i]);
    }
    printf("]\n");

    return 0;
}