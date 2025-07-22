#include <stdio.h>

int main() {
    int var1 = 100;
    float var2 = 200.0;
    char var3 = 'A';  

    printf("val1은 정수이며 값은 %d 입니다.\n", var1);
    // 여기서 형변환 안함
    printf("val2은 실수이며 값은 %.0f 입니다.\n", var2);
    printf("val3은 문자이며 값은 %d 입니다.\n", var3);  
    
    return 0;
}

// ❌

// -> #include <stdio.h> studio 아님