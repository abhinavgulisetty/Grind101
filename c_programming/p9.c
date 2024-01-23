#include<stdio.h>
void main(){
    int my_array[5],n,i;
    // printf("Enter the number of elements:\n");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    //     printf("Enter the element %d\n");
    //     scanf("%d",&my_array[i]);
    // }
    for(i=0;i<n;i++){
        my_array[i] = i+1;
    }
    for(i=0;i<n;i++){
        printf("%d\n",my_array[i]);
    }
}
