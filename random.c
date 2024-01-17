//
// Created by Nguyen Quoc Khanh on 1/17/24.
//

#include <stdlib.h>

char randchar();
char randchar(){
    char randomletter = 'A' + (rand() % 26);
    return randomletter;
}