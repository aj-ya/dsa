#include<stdio.h>
main(int argc,char* argv[]){
    // if(argc==1)printf("error");
    // printf("%c ",*(argv[1]+1));
    // printf("%c ",(*(argv+1))[2]);
    // printf("%c ",argv[1][2]);
    char * a[10]={"hi","hello","how"};
    printf("%d\n",sizeof(a));
    printf("%d",sizeof(char*));
}