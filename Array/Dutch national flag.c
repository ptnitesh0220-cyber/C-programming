#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n],b;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
 int low=0,mid=0,high=n-1;
while(mid<=high){
	if(arr[mid]==0){
		int temp=arr[mid];
		arr[mid]=arr[low];
		arr[low]=temp;
		low++;
		mid++;
	}
	else if(arr[mid]==1){
		mid++;
	}
	else{
		int temp=arr[mid];
		arr[mid]=arr[high];
		arr[high]=temp;
		high--;
	}
	}
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
}
