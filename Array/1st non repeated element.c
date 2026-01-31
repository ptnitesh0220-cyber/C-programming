#include<stdio.h>
int main(){
	int n,i,j,b=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		int count=0;
		for( j=0;j<n;j++){
		if(arr[i]==arr[j]){
			count++;
		}
	}if(count==1){
	printf("%d",arr[i]);
	return 0;}
}
}
