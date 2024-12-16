#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int d;
int cW(char *str){
    int dem=1;
    for(int i=0;i<strlen(str);i++)if(str[i]==' ')dem++;
    return dem;
}
int main(){
    char *s=(int*)malloc(1000000000 * sizeof(int));
    char *sTg=(int*)malloc(1000000000 * sizeof(int));
    do{
        printf("MENU\n1.Nhap vao chuoi\n2.In ra chuoi dao nguoc\n3.Dem so luong tu trong chuoi\n4.Nhap vao chuoi khac, so sanh voi chuoi ban dau\n5.In ra tat ca chu cai trong chuoi\n6.Nhap them chuoi khac va them chuoi do vao chuoi ban dau\n7.Thoat\nLua chon cua ban: ");
        scanf("%d",&d);
        getchar();
        switch(d){
            case 1:
                printf("Nhap vao chuoi ki tu: ");
                fgets(s,1000000,stdin);
                if(strlen(s)>0&&s[strlen(s)-1]=='\n')s[strlen(s)-1]='\0';
                break;
            case 2:
                printf("Chuoi dao nguoc: ");
                for(int i=strlen(s)-1;i>=0;i--)printf("%c",*(s+i));
                printf("\n");
                break;
            case 3:
                printf("So luong tu trong chuoi: %d\n",cW(s));
                break;
            case 4:
                printf("Nhap chuoi so sanh: ");
                fgets(sTg,1000000,stdin);
                if(strlen(sTg)>0&&sTg[strlen(sTg)-1]=='\n')sTg[strlen(sTg)-1]='\0';
                if(strcmp(s,sTg)==0)printf("Hai chuoi co do dai bang nhau\n");
                else if(strcmp(s,sTg)<0)printf("Chuoi so sanh ngan hon chuoi ban dau\n");
                else printf("Chuoi so sanh dai hon chuoi ban dau\n");
                break;
            case 5:
                printf("Chuoi sau khi in hoa: ");
                for(int i=0;i<strlen(s);i++)printf("%c",toupper(s[i]));
                printf("\n");
                break;
            case 6:
                printf("Nhap chuoi can them: ");
                fgets(sTg,1000000,stdin);
                if(strlen(sTg)>0&&sTg[strlen(sTg)-1]=='\n')sTg[strlen(sTg)-1]='\0';
                strcat(s,sTg);
                printf("Da them chuoi vao chuoi ban dau\n");
                break;
            default:
                continue;
        }
    }while(d!=7);
    free(s);
}