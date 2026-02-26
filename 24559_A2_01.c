#include<stdio.h>
int binarysearch(int arr[],int item,int low,int high){
   while(low<= high){
    int mid=low+(high-low)/2;
      
    if(item==arr[mid])
      return mid+1;
        
    else if(item>arr[mid])
     low = mid+1;
     
    else
      high=mid-1;
  }
  return low;
}
void binaryinsertionsort(int arr[], int n){
  int i,j,selected,loc;
  
  for(i=1;i<n;i++){
    selected= arr[i];
    loc = binarysearch(arr,selected,0,i-1);
    
    j=i-1;
    while(j>=loc){
     arr[j+1] = arr[j];
     j--;
    }
    
    arr[j+1]= selected;
  }
}
int main(){
  int arr[] = {37,23,0,17,12,72,31};
  int n = sizeof(arr)/ sizeof(arr[0]);
  
  
  binaryinsertionsort(arr,n);
  
  printf("Sorted array:");
  for(int i=0; i<n; i++)
    printf("%d",arr[i]);
    
  return 0;
}
  
