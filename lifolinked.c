#include <stdio.h>
#include <stdlib.h>

typedef struct node {

    int number;
    struct node *next; 

} node;

int main (void){

    node *list = NULL;
// aqui eu so crio um pointer mas nao ta apontando pra nada
    for (int i = 0; i < 3; i++){

        // esse loop cria nodes e armazena ints na variavel number

        node *n = malloc(sizeof(node));
        if (n == NULL){

            return 1;
        
        }

        n->number = i;
        n->next = list;
        list = n;
    // nessa ordem eu nao abandono nenhum node, é meio cirurgico mas rodou
    
        printf("%i\n", n->number);

    }

    return 0;

}