#include <stdio.h> //相当引用了整个 stdio.h 头文件

int main(void){ //根据最新的标准，需要使用void文件

    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;

    printf("there are %d feet in %d fathoms\n",feet,fathoms)  ;

    printf("Yes I said %d feet\n", 6 * fathoms);
    
    return 0;
}
