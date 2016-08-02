#include <stdio.h>
#include <stdlib.h>

int main()
{
    int store[30], user, num, i;
    printf("Please tell me how many element do you want: ");
    scanf("%d", &num);

    printf("Write value of element one by one...\n");
    for(i = 0; i < num; i++){
        scanf("%d", &store[i]);
    }

    printf("What element do you want to see? Tell me in order: ");
    scanf("%d", &user);

    printf("You value is %d in the order of %d\n", store[user -1], user);
    return 0;
}
