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
	for (int i = 0; i < n ; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep :\n");
    for(int i=0;i<n;i++){
    	printf("%d\t",arr[i]);
	}
	
	
	
}
