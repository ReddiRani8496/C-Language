#include<stdio.h>
int main() {
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    int len = 2;
    // insertion at end
    printf("Enter the item to add at end of array: ");
    int item;
    scanf("%d",&item);
    arr[len]=item;
    len++;

    // insertion at particular index
    printf("Enter the index and item to be inserted: ");
    int index;
    scanf("%d %d",&index,&item);
    int i;
    for(i=len;i>index;i--)
        arr[i]=arr[i-1];
    arr[i]=item;
    len++;


    // deletion at end
    arr[len-1] = 0;
    len--;

    // deletion at beggining

    for(i=0;i<len-1;i++)
        arr[i]=arr[i+1];
    len--;
    
    // deletion at particular index
     printf("Enter the index  to be deleted: ");
    scanf("%d",&index);
    for(i=index;i<len-1;i++)
        arr[i]=arr[i+1];
    len--;

    //traversal
    for(i=0;i<len;i++)
        printf("%d",arr[i]);
}