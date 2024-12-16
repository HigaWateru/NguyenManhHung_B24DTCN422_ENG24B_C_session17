#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int d,n,c,e;
int main(){
    char *s=(int*)malloc(1000000000 * sizeof(int));
    do{
        printf("MENU\n1.Nhap vao chuoi\n2.In ra chuoi\n3.Dem so luong chu cai trong chuoi va in ra\n4.Dem so luong chu so trong chuoi va in ra\n5.Dem so luong ky tu dac biet trong chuoi va in ra\n6.Thoat\nLua chon cua ban: ");
        scanf("%d",&d);
        getchar();
        switch(d){
            case 1:
                printf("Nhap chuoi ki tu: ");
                fgets(s,100000,stdin);
                for(int i=0;i<strlen(s);i++){
                    if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))c++;
                    else if(s[i]>='0'&&s[i]<='9')n++;
                    else e++;
                }
                break;
            case 2:
                printf("%s",s);
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n",c);
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n",n);
                break;
            case 5:
                printf("So luong ki tu dac biet trong chuoi: %d\n",e-1);
                break;
            default:
                continue;
        }
    }while(d!=6);
    free(s);
}
