#include<stdio.h>
int main () {
    int arr[10];
    int temp;
    for(int i=0;i<=10;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<10;j++){
        for(int i=1+j;i<10;i++){
            if(arr[j]>arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    printf("This arr is in accending order: ");
    for(int i=0;i<10;i++){
printf("%d\n",arr[i]);
    }
    return 0;
}
