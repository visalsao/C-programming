#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    /*Here is the example of Declaration of Function function:
    Structure:
    type of function(float, string, int, char etc.) Name of the function add the paramiter in the parentesis and code;
    */
        int visal(int x, int y){
        return x*y;
    }
    int arr[4] = {5,6,7,8};
    int i = 0;

    while(i < 4){
        printf("The array is: %d\n", arr[i]);
        i++;
    }
    //pointer...
    int var[3] = {1,2,3};
    int *ptr;
    printf("%d\n", *ptr);
    ptr++;
    printf("%d\n",*ptr);



    /*How to view the function*/
    printf("the answer is %d", visal(6,2) );
}

