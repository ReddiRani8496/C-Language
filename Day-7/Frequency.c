#include<stdio.h>
int main() {
    int arr[] ={10,20,30,20,50,10,30,60,30};
    int i,j;
    int element = 60;
    int frequency=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++){
        
        if(arr[i]==element) {
            frequency++;
        }
    }
    printf("%d",frequency);
}