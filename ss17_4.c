#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int d,n,gt;
char c;
int snt(int a){
    if(a<2)return 0;
    for(int i=2;i<=sqrt(a);i++)if(a%i==0)return 0;
    return 1;
}
void swap(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int cmp1(const void *ptr1, const void *ptr2){
    int *x=(int*)ptr1;
    int *y=(int*)ptr2;
    if(*x<*y)return -1;
    else return 1;
}
int cmp2(const void *ptr1, const void *ptr2){
    int *x=(int*)ptr1;
    int *y=(int*)ptr2;
    if(*x>*y)return -1;
    else return 1;
}
int main(){
    int *a=(int*)malloc(100000000*sizeof(int));
    do{
        printf("MENU\n1.Nhap vao so phan tu va tung phan tu\n2.In ra phan tu la so chan\n3.In ra phan tu la so nguyen to\n4.Dao nguoc mang\n5.Sap xep mang\n6.Nhap vao mot phan tu va tim kiem phan tu trong mang\n7.Thoat\nLua chon cua ban: ");
        scanf("%d",&d);
        getchar();
        switch(d){
            case 1:
                printf("Nhap so phan tu: ");
                scanf("%d",&n);
                for(int i=0;i<n;i++)scanf("%d",a+i);
                break;
            case 2:
                printf("Phan tu la so chan trong mang: ");
                for(int i=0;i<n;i++)if(*(a+i)%2==0)printf("%d ",*(a+i));
                printf("\n");
                break;
            case 3:
                printf("Phan tu la so nguyen to trong mang: ");
                for(int i=0;i<n;i++)if(snt(*(a+i)))printf("%d ",*(a+i));
                printf("\n");
                break;
            case 4:
                for(int i=0;i<n/2;i++)swap(&a[i],&a[n-i]);
                printf("Mang da duoc dao nguoc\n");
                break;
            case 5:
                do{
                    printf("a.Tang dan\nb.Giam dan\nLua chon cua ban: ");
                    scanf("%s",&c);
                    if(c=='a')qsort(a,n,sizeof(int),cmp1);
                    else qsort(a,n,sizeof(int),cmp2);
                }while(c!='a'&&c!='b');
                printf("Mang da duoc sap xep\n");
                break;
            case 6:
                printf("Nhap gia tri can tim: ");
                scanf("%d",&gt);
                printf("Vi tri co gia tri trong mang: ");
                for(int i=0;i<n;i++)if(*(a+i)==gt)printf("%d ",i);
                printf("\n");
        }
    }while(d!=7);
    free(a);
}
