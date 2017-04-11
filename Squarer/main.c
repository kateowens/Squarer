//
//  main.c
//  Squarer
//
//  Created by Katherine Owens on 4/11/17.
//  Copyright © 2017 Katherine Owens. All rights reserved.
//

#include <stdio.h>

void squarer (int number) {
    int squaredNumber = number * number;
    printf("%d squared is %d.\n", number, squaredNumber);
    return ;
}

int main(int argc, const char * argv[]) {
    squarer(5);
    return 0;
}
