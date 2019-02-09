#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    FILE *src, *des;
    if(argc == 3){ //命令行传入源文件和目的文件地址
        if((src = fopen(argv[1], "rb")) == NULL){
            printf("src error: 源文件无法打开或不存在\n");
            return 0;
        }
        if((des = fopen(argv[2], "wb")) == NULL){
            printf("des error: 不合法的目的文件路径\n");
            return 0;
        }    
    }
    else if(argc == 1){ //命令行为传入参数，程序内输入
        char tmp[128];
        scanf("%s", tmp);
        if((src = fopen(tmp, "rb")) == NULL){
            printf("src error: 源文件无法打开或不存在\n");
            return 0;
        }
        scanf("%s", tmp);
        if((des = fopen(tmp, "wb")) == NULL){
            printf("des error: 不合法的目的文件路径\n");
            return 0;
        }
    }
    else{//参数不合法
        printf("parameter error: 不合法的参数\n");
        return 0;
    }

    char buf[32];
    while(!feof(src)){ // 拷贝文件
        fread(buf, 1, 32, src);
        fwrite(buf, 1, 32, des);
    }
    
    return 0;
}