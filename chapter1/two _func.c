//*tow func 一个文件包含两个函数*/
#include <stdio.h>

void butler(void); //函数声明

int main(void){


     printf("I will summon the buler function\n");
     butler(); //函数调用
     printf("Yes. Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void){ //函数定义
    printf("Your range sir\n");
}