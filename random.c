//
//  random.c
//  OS
//
//  Created by Sahil Jartare on 2024/09/01.
//

#include "random.h"
#include <stdio.h>
#include <stdlib.h>

char randchar()
{
    return 'A' + rand()%26;
}
