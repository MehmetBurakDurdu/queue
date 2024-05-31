#include <stdio.h>
#include<stdlib.h>

#define SIZE 5
int arr[SIZE];
int front, rear;

int main(){
    int islem,sayi,i;
    printf("sayi eklemek icin 1 e basiniz\n");
    printf("sayi cikartmak icin 2 e basiniz\n");
    printf("diziyi gostermek icin 3 e basiniz\n");
    printf("yapmak istediginiz islemi giriniz:\n");
    scanf("%d", &islem);
    switch(islem){
        case 1:
            printf("eklemek istediginiz sayiyi lutfen giriniz:");
            scanf("%d", &sayi);
            enqueue(sayi);
            break;
        case 2:
            printf("dizi bosaltiliyor...\n");
            dequeue();
            break;
        case 3:
            printf("kuyruk goruntuleniyor\n");
            for (i=0;i<=SIZE-1;i++){
                printf("%d\t",arr[i]);
            }
            break;
    }
    return 0;
}

int isFull(){
    if (rear == SIZE -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if (front <0 || front > rear){
        return 1;
    }
    else{
        return 0;
    }
}

int enqueue(int data){
    int i;
    if (isFull()){
        return 0;
    }
    arr[rear] = data;
    rear += 1;
    for (i=0;i<SIZE-1;i++){
        printf("%d\t",arr[i]);
    }
    main();
}

int dequeue(){
    if (isEmpty()){
        return 0;
    }
    int data = arr[front];
    front += 1;
    return data;
}



