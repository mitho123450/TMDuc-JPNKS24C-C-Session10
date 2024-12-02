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
		int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    int positions[n];
    int count = 0; 

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            positions[count] = i; 
            count++;
        }
    }

    if (count > 0) {
        printf("Phan tu %d duoc tim thay o vi tri: ", x);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong trong mang\n", x);
    }

    return 0;
}
