#include "vector.h"
void fill(int* vector, int size, int value){
    int i;
    for(i=0; i<size; i++){
        vector[i]=value;
    }
}

int find(int* vector, int size, int value){
    int i;
    for (i=0; i<size; i++){
        if(vector[i]==value){
            return i;
        }
    }
    return -1;
}