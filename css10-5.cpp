#include<stdio.h>
   int binarySearch(int arr[], int n, int x) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; 

       
        if (arr[mid] == x)
            return mid;

        
        if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1; 
    }
    return -1; 
}
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
		for(int i=1;i<n;i++){
				int key=arr[i];
				int j=i-1;
			while(j>=0&&key<arr[j]){
				arr[j+1]=arr[j];
				j--;
			}
			arr[j+1]=key;
			
		}
		printf("\n");
		printf("Mang sau khi sap xep ");
		for(int i=0;i<n;i++){
			printf("%d\t",arr[i]);
		}
		  int x;
    printf("\nNhap so can tim: ");
    scanf("%d", &x);

   
    int result = binarySearch(arr, n, x);

   
    if (result != -1)
        printf("Phan tu %d duoc tim thay o vi tri: %d\n", x, result+1);
    else
        printf("Phan tu khong co trong mang\n", x);
		return 0;
	}

