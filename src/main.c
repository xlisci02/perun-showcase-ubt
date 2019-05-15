//
//  main.c
//  BST
//
//  Created by Will Salisbury on 5/21/14.
//  Copyright (c) 2014 Will Salisbury. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "ubt.h"

static const u_int32_t maxVal = 100;

int main(int argc, char **argv)
{
    assert(argc > 1);
    FILE * fp = fopen(argv[1], "r");
    int num;
    int c;
    BST tree = bst_create();
    
    while( (c = fscanf(fp, "%d ", &num)) != EOF && c == 1){
        bst_insert(tree, num);
    }

    bst_print(tree);
    fprintf(stdout, "BST Depth: %lu\n", bst_depth(tree));
    
    bst_destroy(&tree);
    exit(EXIT_SUCCESS);
}

