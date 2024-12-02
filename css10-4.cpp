#include<stdio.h>
    int main(){
	 int arr[100];
	 int n;
    
	    printf("Nhap mang co bao nhieu phan tu ");
	    scanf("%d",&n);
	    
	    printf("Nhap phan tu cho mang:\n");
		    for(int i=0;i<n;i++){
		    	printf("Nhap vao phan tu thu %d ",i+1);
		    	scanf("%d",&arr[i]);
			}
		printf("Mang gom nhung phan tu la :\n");
			for(int i=0;i<n;i++){
			printf("%d\t",arr[i]);
		    }
		printf("\n");
		for(int i=0;i<n;i++){
			int min=arr[i];
			for(int j=i+1;i<n;j++){
				if(min>arr[j]){
				min=arr[j];
				arr[j]=arr[i];
				arr[i]=min;
			}
		}
	}
		printf("\n");
		printf("Mang sau khi sap xep ");
		for(int i=0;i<n;i++){
			printf("%d\t",arr[i]);
		}
	
	}
