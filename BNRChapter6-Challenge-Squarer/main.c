//
//  main.c
//  BNRChapter6-Challenge-Squarer


#include <stdio.h>
#include <stdlib.h>


int theSquareOf (int num) {

    int sqr = num * num;
    printf("\"%d\" squared is \"%d\".\n", num, sqr);
    
    return sqr;
}

int main(int argc, const char * argv[]) {
    // insert code here...

    
    theSquareOf(5);
    
    return EXIT_SUCCESS;
}
