#include<stdio.h>
int index=-1;
int isfull(int arr[],int max_length){
    if(index==max_length){
        return 1;
    return 0;
    }
}
int isempty(int arr[]){
    if(index==-1){
        return 1;
    }
    return 0;
}

void push(int arr[],int element){
    if(isempty){
        index=0;
    }
    arr[index]=element;
    index++;
}
void pop(int arr[],int max_length){
    for(int i=0;i<max_length;i++){
            arr[i]=arr[i+1];
    }
}
