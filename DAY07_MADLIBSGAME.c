#include <stdio.h>
#include <string.h>

int main() {

    //MAD LIBS GAME
    
    //ARRAY
    char noun[30] = ""; //person/place/thing
    char verb[30] = ""; //action=running
    char adjective1[30] = ""; //describe something = fast
    char adjective2[30] = "";
    char adjective3[30] = "";

    //adjective1
    printf("Enter an adjective (describe): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';
    
    //noun
    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    //adjective2
    printf("Enter an adjetive (describe): ");
    fgets(adjective2, sizeof(adjective2), stdin);   
    adjective2[strlen(adjective2) - 1] = '\0';

    //verb
    printf("Enter a verb(action (-ing)): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    //adjective3
    printf("Enter an adjetive (describe): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3) - 1] = '\0';

    //print
    printf("Tonight was a %s night.\n", adjective1);
    printf("%s approached us with my homie\n", noun);
    printf("%s was %s and %s!!!\n", noun, adjective2, verb);
    printf("I was so %s that the %s is %s", adjective3, noun, verb);
    return 0;
}
