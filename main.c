//
//  main.c
//  Study C
//
//  Created by 김예일 on 2015. 9. 18..
//  Copyright (c) 2015년 김예일. All rights reserved.
//

#include <stdio.h>

int main(void) {
    

    int num1, num2;
    printf("숫자 2개입력: ");
    scanf("%d %d", &num1, &num2);
    int result= num1+num2;
    printf("%d + %d = %d \n", num1, num2, result);
    
    
    return 0;
    
}
