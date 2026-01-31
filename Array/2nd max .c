#include<stdio.h>
#include<limits.h>
int main(){
	int n,i,b;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
}
int sec=INT_MIN;
int max=arr[0];
for(i=0;i<n;i++){
	if(arr[i]>max){
		max=arr[i];
	}
	else if(max>arr[i] && sec<arr[i]){
		 sec=arr[i];
	}
}
	printf("%d",sec);
}
