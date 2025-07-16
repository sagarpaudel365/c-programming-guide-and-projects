#include<stdio.h>
void printarray(int *ptr,int n){
    for(int i =0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
}
int main() {
    int arr[]= {1,45,65,556,685,3,64,646};
    printarray(arr,8);

    return 0;
}