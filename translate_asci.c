#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (){
    string msg;

    do{
    msg = get_string("Msg: ");
    } while (!strcmp(msg,""));
    /*
    In c the operator == ,not comparete string
    So for solution the problem I use the function strcmp | string comparete |
    Which retorn 0 if the string they equal*/

    int length = strlen(msg);

    for (int i=0;i<length;i++){

        printf("%i ",msg[i]);
    }
    printf("\n");
    return 0;
}
