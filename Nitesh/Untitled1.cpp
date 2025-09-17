#include<stdio.h>
void insertion sort(int arr[].int){
	int i,key j;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(j>=0&& arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
			}
			arr[j=1]=key;
		}
	}
	void print array(int arr[],intsize){
		int i;
		for(i=0;i<size;i++)
printf("%d",arr[i]);
printf("\n");
int main(){
	int arr[]{12,11,13,5,6};
	int n=size(arr)/size of (arr[0]);
	printf("orignal array:\n");
	printf(arr,n);
	insertion("sort array:\n");
	print array(arr,n);
	return 0;
}
