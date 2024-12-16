#include <stdio.h>
#include <stdlib.h>
int d,n,max;
long long sum;
int main()
{
    int *a=(int*)malloc(10000000 * sizeof(int));
    do{
        printf("MENU\n1.Nhap vao so phan tu va tung phan tu\n2.Hien thi cac phan tu trong mang\n3.Tinh do dai mang\n4.Tinh tong cac phan tu trong mang\n5.Hien thi phan tu lon nhat\n6.Thoat\nLua chon cua ban: ");
        scanf("%d",&d);
        switch(d){
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d",&n);
                printf("Nhap gia tri tung phan tu: \n");
                for(int i=0;i<n;i++){
                    scanf("%d",a+i);
                    sum+=*(a+i);
                    max=fmax(max,*(a+i));
                }
                break;
            case 2:
                for(int i=0;i<n;i++)printf("%d ",*(a+i));
                printf("\n");
                break;
            case 3:
                printf("Do dai mang: %d\n",n);
                break;
            case 4:
                printf("Tong phan tu trong mang: %lld\n",sum);
                break;
            case 5:
                printf("Gia tri lon nhat trong mang: %d\n",max);
                break;
            default:
                continue;
        }
    }while(d!=6);
    free(a);
}
