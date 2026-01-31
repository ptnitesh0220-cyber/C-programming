#include <stdio.h>

int main() {
	int n,m,i,j,k;
	scanf("%d%d",&n,&m);
	int a[n],b[m];
	for(i=1;i<=n;i++){
	    scanf("%d",&a[i]);
	    }
	 	for(i=1;i<=m;i++){
	    scanf("%d",&b[i]);
	    }
	    int c[n+m];
	    for(i=1;i<=n+m;i++){
	        if(i<=n){
	        for(j=1;j=i;j++){
	        c[i]=a[j];}}
	        else
	            for(k=1;k<=m;k++){
	                 c[i]=b[k];
	      }
	   }
	    for(i=0;i<n+m;i++){
	        printf("%d",c[i]);
	    }
		
}

