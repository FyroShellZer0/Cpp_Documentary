#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void intFreed(int **p);
void charFreed(char **p);
void askAuto(void);
void askManual(void);
void MALLOC_AUTO(void);
void CALLOC_AUTO(void);
void REALLOC_AUTO(void);
void MALLOC_MANUAL(void);
void CALLOC_MANUAL(void);
void REALLOC_MANUAL_INT(int **p, int *size);
void REALLOC_MANUAL_CHAR(char **p, int *size);
void REALLOC_MANUAL_STRING(char **p, int *size);
int main(void) {
    int choice;
    printf("\nMemory Allocator\n");
    printf("Modes\n");
    printf("1. Manual(no automatic free)\n");
    printf("2. Auto(automatic freeing)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();
    if(choice == 1) {
        printf("Manual Mode\n");
        printf("Use reponsively\n");
        askManual();
    }
    else if(choice == 2) {
        printf("Auto Mode\n");
        askAuto();
    }
    
    return 0;
}
void intFreed(int **p) {
    free(*p);
    *p = NULL;
    printf("memory freed.\n");
}
void charFreed(char **p){
    free(*p);
    *p = NULL;
    printf("Memory freed.\n");
}
void MALLOC_AUTO(void) {
    int choice;
    int size;
    int value;
    char temp = '\0';
    char character = '\0';
    char tempString[1024];
    
    printf("\nMALLOC MEMORY\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar();
    switch(choice) {
        case 1:
            printf("Enter how many integer do you want to allocate: ");
            scanf("%d", &size);
            int *p = (int*)malloc(size*sizeof(int));
            if(p == NULL) {
                perror("Cannot allocate memory..\n");
                break;
            }
            printf("Successfully allocated %ld bytes of memory!\n", size*sizeof(int));
            for(int i = 0; i < size; i++) {
                printf("Enter value at your integer #%d: ", i+1);
                if(scanf("%d", &p[i]) != 1) {
                    printf("invalid input\n");
                }
            }
            for(int i = 0; i < size; i++){
                printf("dynamically allocated value at #%d: %d ",i+1, *(p+i));
                printf("\n");
            }
            intFreed(&p);
            break;
        case 2:
            printf("1. character\n");
            printf("2. string\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            getchar();
            if(choice == 1) {
                printf("Allocation of character\n");
                printf("Enter how many single character do you want to allocate:");
                scanf("%d", &size);
                char *p = malloc(size*sizeof(char));
                if(p == NULL){
                    perror("Cannot allocate memory...\n");
                    break;
                }
                printf("Successfully allocated %zu bytes for characters\n", size*sizeof(char));
                for(int i = 0; i < size; i++){
                    printf("Enter character for #%d: ", i+1);
                    if(scanf(" %c", &p[i]) != 1){
                        printf("invalid input, you only allocated %d of character, %d characters left\n", size, i+1);
                        break;
                    }
                }
                for(int i = 0; i < size; i++) {
                    printf("character #%d: %c: ", i+1, *(p+i));
                    printf("\n");
                }
                charFreed(&p);
            }
            else if(choice == 2) {  
                printf("String allocation\n");
                printf("Enter string: ");
                fgets(tempString, sizeof(tempString), stdin);
                tempString[strcspn(tempString, "\n")] = '\0';
                char *p = malloc(strlen(tempString)+1*sizeof(char));
                if(p == NULL){
                    perror("Cannot allocate memory\n");
                    break;
                }
                strcpy(p, tempString);
                printf("String: %s\n", p);
                charFreed(&p);
            } 
            else{
                perror("invalid choice!, please enter 1 or 2 only!\n");
            }
            break;
        default:
            perror("Error, please enter 1, 2 or 3 only\n");
            break;
    }

}
void CALLOC_AUTO(void) {
    int choice;
    int size;
    int value;
    char temp = '\0';
    char character = '\0';
    char tempString[1024];
    printf("\nCALLOC MEMORY\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar();
    switch(choice) {
        case 1:
            printf("Enter how many integer do you want to allocate: ");
            scanf("%d", &size);
            int *p = (int*)calloc(size, sizeof(int));
            if(p == NULL) {
                perror("Cannot allocate memory..\n");
                break;
            }
            printf("Successfully allocated %ld bytes of memory!\n", size*sizeof(int));
            for(int i = 0; i < size; i++){
                printf("dynamically allocated value at #%d: %d ",i+1, *(p+i));
                printf("\n");
            }
            for(int i = 0; i < size; i++) {
                printf("Enter value at your integer #%d: ", i+1);
                if(scanf("%d", &p[i]) != 1) {
                    printf("invalid input\n");
                }
            }
            for(int i = 0; i < size; i++){
                printf("dynamically allocated value at #%d: %d ",i+1, *(p+i));
                printf("\n");
            }
           
            intFreed(&p);
            break;
        case 2:
            printf("1. character\n");
            printf("2. string\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            getchar();
            if(choice == 1) {
                printf("Allocation of character\n");
                printf("Enter how many single character do you want to allocate:");
                scanf("%d", &size);
                char *p = calloc(size, sizeof(char));
                if(p == NULL){
                    perror("Cannot allocate memory...\n");
                    break;
                }
                printf("Successfully allocated %zu bytes\n", size*sizeof(char));
                printf("character allocated\n");
                for(int i = 0; i < size; i++) {
                    printf("character #%d: %c, NULL", i+1, p[i]);
                    printf("\n");
                }
                getchar();
                for(int i = 0; i < size; i++){
                    printf("Enter character for #%d: ", i+1);
                    if(scanf(" %c", &p[i]) != 1){
                        printf("invalid input, you only allocated %d of character, %d characters left\n", size, i+1);
                        break;
                    }
                }
                for(int i = 0; i < size; i++) {
                    printf("character #%d: %c: ", i+1, *(p+i));
                    printf("\n");
                }
                charFreed(&p);
            }
            else if(choice == 2) {  
                printf("String allocation\n");
                printf("Enter string: ");
                fgets(tempString, sizeof(tempString), stdin);
                tempString[strcspn(tempString, "\n")] = '\0';
                char *p = calloc(strlen(tempString)+1, sizeof(char));
                if(p == NULL){
                    perror("Cannot allocate memory\n");
                    break;
                }
                printf("Successfully allocated %zu bytes for string\n",strlen(tempString)+1 * sizeof(char));
                printf("String allocated: %s, NULL\n", p);
                strcpy(p, tempString);
                printf("String: %s\n", p);
                charFreed(&p);
            } 
            else{
                perror("invalid choice!, please enter 1 or 2 only!\n");
            }
            break;
        default:
            perror("Error, please enter 1, 2 or 3 only\n");
            break;
    }
}
void REALLOC_AUTO(void){
    int choice;
    int size;
    int expand;
    int shrink;
    int newSize;
    int *tmpInt = NULL;
    char *tmpChar = NULL;
    char *pCHAR = NULL;
    int *pINT = NULL;
    char buffer[1024];
    char **pSTRING = NULL;
    int totalSize = 0;
    printf("\nREALLOC NEW MEMORY\n");
    printf("NOTE: With no memory existing because of auto mode, \nwe cant resize or manipulate data but instead, \nwe can allocate new memory using realloc.\nthen, you can manipulate the memory.\n");
    printf("1. Allocate new memory\n");
    printf("2. exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar();
    
    
    if(choice == 1) {
        printf("REALLOC NEW MEMORY/CREATE\n");
        printf("1. int\n");
        printf("2. char\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        if(choice == 1) {
            printf("REALLOC NEW INT MEMORY\n");
            printf("Enter how many integers you wanna reallocate: ");
            scanf("%d", &size); 
            pINT = realloc(pINT, size * sizeof(int));
            if(pINT == NULL) {
                perror("Cannot allocate memory..\n");
                exit(1);
            }
            printf("Successfully reallocated %zu bytes of memory!\n", size*sizeof(int));
            for(int i = 0; i < size; i++) {
                printf("Enter value at your integer #%d: ", i+1);
                if(scanf("%d", &pINT[i]) != 1) {
                    printf("invalid input\n");
                }
            }
            for(int i = 0; i < size; i++){
                printf("dynamically reallocated value at #%d: %d ",i+1, *(pINT+i));
                printf("\n");
            }
            while(true) {
                printf("1. Expand the memory\n");
                printf("2. Shrink the memory\n");
                printf("3. free the memory\n");
                printf("4. exit\n");
                printf("Enter choice: ");
                scanf("%d", &choice);
                switch(choice) {
                    case 1:
                        printf("Expanding the memory: \ncurrent integer:" );
                        for(int i = 0; i < size; i++){
                            printf("\ninteger index #%d: %d\n", i+1, *(pINT+i));
                            printf("\n");
                        }
                        printf("integers = %d, size = %zu\n", size, size*sizeof(int));
                        printf("Enter how many integers to add to your %d integer: ", size);
                        scanf("%d", &expand);
                        getchar();

                         newSize = size + expand;
                        
                        tmpInt = realloc(pINT, newSize * sizeof(int));
                        if(tmpInt == NULL) {
                            perror("Cannot allocate memory\n");
                            exit(1);
                        }
                        pINT = tmpInt; //pass to use tmp again
                        printf("Successfully addded %d int into previous %d int, %d integers overall and %ld size.\n", expand, size, newSize, newSize*sizeof(int));
                        
                       
                        for(int i = size; i < newSize; i++){
                            printf("Enter value at #%d: ", i+1);   
                            scanf("%d", &pINT[i]);
                        }
                        printf("New saved integers: ");
                        printf("\n");
                        for(int i = 0; i < newSize; i++){
                            printf("value at #%d: %d\n", i+1, *(pINT+i));
                            printf("\n");
                        }
                        size = newSize;
                        break;
                    case 2:
                        printf("Shrink memory\n");
                        for(int i = 0; i < size; i++){
                            printf("\ninteger index #%d: %d\n", i+1, *(pINT+i));
                            printf("\n");
                        }
                        printf("integers = %d, size = %ld\n", size, size*sizeof(int));
                        printf("Enter how many integers to subtract to your %d integers: ", size);
                        scanf("%d", &shrink);
                        getchar();
                        if(shrink > size){
                            printf("Error, please enter a number less than the %d integer/s.. aborting...\n", size);
                            intFreed(&pINT);
                            return;
                        }
                        newSize = size - shrink;
                        
                        tmpInt = realloc(pINT, newSize * sizeof(int));
                        if(tmpInt == NULL) {
                            perror("Cannot allocate memory\n");
                            exit(1);
                        }
                        pINT = tmpInt; //pass to use tmp again
                        printf("Successfully subtracted %d int into previous %d int, %d integers overall and %ld size.\n", expand, size, newSize, newSize*sizeof(int));
                        
                       
                        for(int i = size; i < newSize; i++){
                            printf("Enter value at #%d: ", i+1);   
                            scanf("%d", &pINT[i]);
                        }
                        printf("New saved integers: ");
                        printf("\n");
                        for(int i = 0; i < newSize; i++){
                            printf("value at #%d: %d\n", i+1, *(pINT+i));
                            printf("\n");
                        }
                        size = newSize;
                        break;
                    case 3:
                        printf("CAUTION!, You will witness memory accessing after freeing if, a GARBAGE VALUES\n");
                        intFreed(&pINT);
                        
                        break;
                    case 4:
                        intFreed(&pINT);
                        exit(1);
                        break;
                    default:
                        perror("Error, Please enter 1, 2, 3, 4 or 5 \n");
                        break;
                }
            }
        }
        else if(choice == 2){
            printf("1. char\n");
            printf("2. string\n");
            printf("Enter choice: ");
            scanf("%d", &choice);
            getchar();
            if(choice == 1){
                printf("Enter how many characters you wanna reallocate: ");
                scanf("%d", &size); 
                getchar();
                pCHAR = realloc(pCHAR, size * sizeof(char));
                if(pCHAR == NULL) {
                    perror("Cannot allocate memory..\n");
                    exit(1);
                }
                printf("Successfully reallocated %zu bytes of memory!\n", size*sizeof(char));
                for(int i = 0; i < size; i++) {
                    printf("Enter value at your character #%d: ", i+1);
                    if(scanf(" %c", &pCHAR[i]) != 1) {
                        printf("invalid input\n");
                    }
                }
                for(int i = 0; i < size; i++){
                    printf("dynamically reallocated value at #%d: %c ",i+1, *(pCHAR+i));
                    printf("\n");
                }
                while(true) {
                    printf("1. Expand the memory\n");
                    printf("2. Shrink the memory\n");
                    printf("3. free the memory\n");
                    printf("4. exit\n");
                    printf("Enter choice: ");
                    scanf("%d", &choice);
                    switch(choice) {
                        case 1:
                            printf("Expantrttrding the memory: \ncurrent characters:" );
                            for(int i = 0; i < size; i++){
                                printf("\ncharacter index #%d: %c\n", i+1, *(pCHAR+i));
                                printf("\n");
                            }
                            printf("characters = %d, size = %zu\n", size, size*sizeof(char));
                            printf("Enter how many characters to add to your %d characters: ", size);
                            scanf("%d", &expand);
                            getchar();

                            newSize = size + expand;
                            
                            tmpChar = realloc(pCHAR, newSize * sizeof(char));
                            if(tmpChar == NULL) {
                                perror("Cannot allocate memory\n");
                                exit(1);
                            }
                            pCHAR = tmpChar; //pass to use tmp again
                            printf("Successfully addded %d int into previous %d int, %d characters overall and %ld size.\n", expand, size, newSize, newSize*sizeof(char));
                            
                        
                            for(int i = size; i < newSize; i++){
                                printf("Enter value at #%d: ", i+1);   
                                scanf(" %c", &pCHAR[i]);
                            }
                            printf("New saved characters: ");
                            printf("\n");
                            for(int i = 0; i < newSize; i++){
                                printf("value at #%d: %c\n", i+1, *(pCHAR+i));
                                printf("\n");
                            }
                            size = newSize;
                            break;
                        case 2:
                            printf("Shrink memory\n");
                            for(int i = 0; i < size; i++){
                                printf("\ncharacter index #%d: %c\n", i+1, *(pCHAR+i));
                                printf("\n");
                            }
                            printf("characters = %d, size = %ld\n", size, size*sizeof(char));
                            printf("Enter how many character to subtract to your %d character: ", size);
                            scanf("%d", &shrink);
                            getchar();
                            if(shrink > size){
                                printf("Error, please enter a number less than the %d character/s.. aborting...\n", size);
                                charFreed(&pCHAR);
                                return;
                            }
                            newSize = size - shrink;
                            
                            tmpChar = realloc(pCHAR, newSize * sizeof(char));
                            if(tmpChar == NULL) {
                                perror("Cannot allocate memory\n");
                                exit(1);
                            }
                            pCHAR = tmpChar; //pass to use tmp again
                            printf("Successfully subtracted %d char into previous %d char, %d characters overall and %ld size.\n", expand, size, newSize, newSize*sizeof(char));
                            
                        
                            for(int i = size; i < newSize; i++){
                                printf("Enter value at #%d: ", i+1);   
                                scanf("%c", &pCHAR[i]);
                            }
                            printf("New saved characters: ");
                            printf("\n");
                            for(int i = 0; i < newSize; i++){
                                printf("value at #%d: %c\n", i+1, *(pCHAR+i));
                                printf("\n");
                            }
                            size = newSize;
                            break;
                        case 3:
                            charFreed(&pCHAR);
                            break;
                        case 4:
                            charFreed(&pCHAR);
                            exit(1);
                            break;
                        default:
                            perror("Error, Please enter 1, 2, 3, 4 or 5 \n");
                            break;
                    }
                }
            }
            else if(choice == 2) {

            char *pCHAR = NULL;
            char *tmpChar = NULL;
            char buffer[1024];
            int size = 0;
            int totalSize = 0;
            int choice;
            int expand;
            int shrink;

            printf("Realloc string section\n");
            printf("Enter how many strings you want: ");
            scanf("%d", &size);
            getchar();

            // ===== INITIAL ALLOCATION =====
            for(int i = 0; i < size; i++) {

                printf("Enter string #%d: ", i + 1);
                fgets(buffer, sizeof(buffer), stdin);
                buffer[strcspn(buffer, "\n")] = '\0';

                int len = strlen(buffer);

                tmpChar = realloc(pCHAR, totalSize + len + 1);
                if(tmpChar == NULL) {
                    perror("Memory allocation failed");
                    charFreed(&pCHAR);
                    exit(1);
                }

                pCHAR = tmpChar;
                memcpy(pCHAR + totalSize, buffer, len + 1);
                totalSize += len + 1;
            }

            printf("\nSuccessfully allocated %d strings\n", size);

            while(1) {

                printf("\n1. Expand memory\n");
                printf("2. Shrink memory\n");
                printf("3. Free memory\n");
                printf("4. Exit\n");
                printf("Enter choice: ");
                scanf("%d", &choice);
                getchar();

                switch(choice) {

                // ===== EXPAND =====
                case 1: {

                    printf("How many strings to add: ");
                    scanf("%d", &expand);
                    getchar();

                    if(expand <= 0) {
                        printf("Invalid amount\n");
                        break;
                    }

                    char temp[expand][1024];
                    int newTotalSize = totalSize;

                    for(int i = 0; i < expand; i++) {
                        printf("Enter string #%d: ", size + i + 1);
                        fgets(temp[i], 1024, stdin);
                        temp[i][strcspn(temp[i], "\n")] = '\0';
                        newTotalSize += strlen(temp[i]) + 1;
                    }

                    tmpChar = realloc(pCHAR, newTotalSize);
                    if(tmpChar == NULL) {
                        perror("Realloc failed");
                        break;
                    }

                    pCHAR = tmpChar;

                    char *writePtr = pCHAR + totalSize;

                    for(int i = 0; i < expand; i++) {
                        int len = strlen(temp[i]);
                        memcpy(writePtr, temp[i], len + 1);
                        writePtr += len + 1;
                    }

                    totalSize = newTotalSize;
                    size += expand;

                    printf("Successfully expanded.\n");
                    break;
                }

                // ===== SHRINK =====
                case 2: {

                    printf("How many strings to remove from end: ");
                    scanf("%d", &shrink);
                    getchar();

                    if(shrink <= 0 || shrink >= size) {
                        printf("Invalid amount\n");
                        break;
                    }

                    int newSize = size - shrink;
                    int newTotalSize = 0;
                    char *ptr = pCHAR;

                    for(int i = 0; i < newSize; i++) {
                        newTotalSize += strlen(ptr) + 1;
                        ptr += strlen(ptr) + 1;
                    }

                    tmpChar = realloc(pCHAR, newTotalSize);
                    if(tmpChar == NULL && newTotalSize > 0) {
                        perror("Realloc failed");
                        break;
                    }

                    pCHAR = tmpChar;
                    size = newSize;
                    totalSize = newTotalSize;

                    printf("Successfully shrunk memory.\n");
                    break;
                }

                // ===== FREE =====
                case 3:
                    charFreed(&pCHAR);
                    size = 0;
                    totalSize = 0;
                    printf("Memory freed.\n");
                    break;

                case 4:
                    charFreed(&pCHAR);
                    return;

                default:
                    printf("Invalid choice\n");
                }

                // ===== DISPLAY =====
                if(pCHAR != NULL && size > 0) {
                    printf("\nCurrent strings:\n");
                    char *ptr = pCHAR;
                    for(int i = 0; i < size; i++) {
                        printf("String #%d: %s\n", i + 1, ptr);
                        ptr += strlen(ptr) + 1;
                    }
                    printf("Total size: %d bytes\n", totalSize);
                }
            }
        }
            else {
                perror("Invalid choice, please enter 1 or 2 only\n");
                exit(1);
            }
        }
    }
    else if(choice == 2){
        printf("exiting...\n");
        exit(1);
    }
    else{
        perror("Invalid choice, please enter 1 or 2 only\n");
        exit(1);
    }
}   
void askAuto(void) {
    int choice;
    printf("1. MALLOC\n");
    printf("2. CALLOC\n");
    printf("3. REALLOC\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar();
    switch(choice) {
        case 1:
            MALLOC_AUTO();
            break;
        case 2:
            CALLOC_AUTO();
            break;
        case 3:
            REALLOC_AUTO();
            break;
        default:
            perror("Error, please enter 1, 2 or 3 only\n");
            break;
    }
}
void askManual(void) {
    int choice;
    printf("1. MALLOC\n");
    printf("2. CALLOC\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            MALLOC_MANUAL();
            break;
        case 2:
            CALLOC_MANUAL();
            break;
        default:
            perror("Error, please enter 1, 2 or 3 only\n");
            break;
    }
}
void MALLOC_MANUAL(void) {
    int choice;
    int size;
    char tempString[1024];

    printf("\nMALLOC MEMORY\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar();

    switch(choice) {

    // ================= INT =================
    case 1: {

        printf("Enter how many integers: ");
        scanf("%d", &size);

        int *p = malloc(size * sizeof(int));
        if(p == NULL) {
            perror("Cannot allocate memory");
            return;
        }

        for(int i = 0; i < size; i++) {
            printf("Enter value #%d: ", i+1);
            scanf("%d", &p[i]);
        }

        printf("Allocated successfully.\n");

        REALLOC_MANUAL_INT(&p, &size);  // ← PASS POINTER + SIZE
        break;
    }

    // ================= CHAR =================
    case 2: {

        printf("1. character array\n");
        printf("2. string\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        // -------- CHARACTER ARRAY --------
        if(choice == 1) {

            printf("Enter how many characters: ");
            scanf("%d", &size);

            char *p = malloc(size * sizeof(char));
            if(p == NULL) {
                perror("Cannot allocate memory");
                return;
            }

            for(int i = 0; i < size; i++) {
                printf("Enter char #%d: ", i+1);
                scanf(" %c", &p[i]);
            }

            printf("Allocated successfully.\n");

            REALLOC_MANUAL_CHAR(&p, &size); // ← pass to realloc manager
        }

        // -------- STRING --------
        else if(choice == 2) {

            printf("Enter string: ");
            fgets(tempString, sizeof(tempString), stdin);
            tempString[strcspn(tempString, "\n")] = '\0';

            size = strlen(tempString) + 1;

            char *p = malloc(size);
            if(p == NULL) {
                perror("Cannot allocate memory");
                return;
            }

            strcpy(p, tempString);

            printf("Allocated successfully.\n");

            REALLOC_MANUAL_STRING(&p, &size); // ← send to manager
        }

        else {
            printf("Invalid choice\n");
        }

        break;
    }

    default:
        printf("Invalid main choice\n");
    }
}

void CALLOC_MANUAL(void) {
int choice;
    int size;
    char tempString[1024];

    printf("\nMALLOC MEMORY\n");
    printf("1. int\n");
    printf("2. char\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    getchar();

    switch(choice) {

    // ================= INT =================
    case 1: {

        printf("Enter how many integers: ");
        scanf("%d", &size);

        int *p = calloc(size, sizeof(int));
        if(p == NULL) {
            perror("Cannot allocate memory");
            return;
        }

        for(int i = 0; i < size; i++) {
            printf("Enter value #%d: ", i+1);
            scanf("%d", &p[i]);
        }

        printf("Allocated successfully.\n");

        REALLOC_MANUAL_INT(&p, &size);  // ← PASS POINTER + SIZE
        break;
    }

    // ================= CHAR =================
    case 2: {

        printf("1. character array\n");
        printf("2. string\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        // -------- CHARACTER ARRAY --------
        if(choice == 1) {

            printf("Enter how many characters: ");
            scanf("%d", &size);

            char *p = calloc(size ,sizeof(char));
            if(p == NULL) {
                perror("Cannot allocate memory");
                return;
            }

            for(int i = 0; i < size; i++) {
                printf("Enter char #%d: ", i+1);
                scanf(" %c", &p[i]);
            }

            printf("Allocated successfully.\n");

            REALLOC_MANUAL_CHAR(&p, &size); // ← pass to realloc manager
        }

        // -------- STRING --------
        else if(choice == 2) {

            printf("Enter string: ");
            fgets(tempString, sizeof(tempString), stdin);
            tempString[strcspn(tempString, "\n")] = '\0';

            size = strlen(tempString) + 1;

            char *p = calloc(size, sizeof(char));
            if(p == NULL) {
                perror("Cannot allocate memory");
                return;
            }

            strcpy(p, tempString);

            printf("Allocated successfully.\n");

            REALLOC_MANUAL_STRING(&p, &size); // ← send to manager
        }

        else {
            printf("Invalid choice\n");
        }

        break;
    }

    default:
        printf("Invalid main choice\n");
    }
}

void REALLOC_MANUAL_INT(int **p, int *size) {

    int choice;
    int expand;
    int shrink;

    while(1) {

        printf("\n=== INT REALLOC MENU ===\n");
        printf("1. Expand\n");
        printf("2. Shrink\n");
        printf("3. Free\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

        // ===== EXPAND =====
        case 1:

            printf("How many integers to add: ");
            scanf("%d", &expand);

            if(expand <= 0) break;

            int newSize = *size + expand;

            int *tmp = realloc(*p, newSize * sizeof(int));
            if(tmp == NULL) {
                perror("Realloc failed");
                break;
            }

            *p = tmp;

            for(int i = *size; i < newSize; i++) {
                printf("Enter value #%d: ", i+1);
                scanf("%d", &(*p)[i]);
            }

            *size = newSize;
            printf("Expanded successfully.\n");
            break;

        // ===== SHRINK =====
        case 2:

            printf("How many integers to remove from end: ");
            scanf("%d", &shrink);

            if(shrink <= 0 || shrink >= *size) {
                printf("Invalid amount\n");
                break;
            }

            newSize = *size - shrink;

            tmp = realloc(*p, newSize * sizeof(int));
            if(tmp == NULL && newSize > 0) {
                perror("Realloc failed");
                break;
            }

            *p = tmp;
            *size = newSize;

            printf("Shrunk successfully.\n");
            break;

        // ===== FREE =====
        case 3:
            free(*p);
            *p = NULL;
            *size = 0;
            printf("Memory freed.\n");
            break;

        case 4:
            return;

        default:
            printf("Invalid choice\n");
        }

        // DISPLAY
        if(*p != NULL && *size > 0) {
            printf("\nCurrent values:\n");
            for(int i = 0; i < *size; i++) {
                printf("[%d] = %d\n", i, (*p)[i]);
            }
        }
    }
}

void REALLOC_MANUAL_CHAR(char **p, int *size) {

    int choice;
    int expand;
    int shrink;

    while(1) {

        printf("\n=== CHAR ARRAY REALLOC MENU ===\n");
        printf("1. Expand\n");
        printf("2. Shrink\n");
        printf("3. Free\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:

            printf("How many characters to add: ");
            scanf("%d", &expand);

            if(expand <= 0) break;

            int newSize = *size + expand;

            char *tmp = realloc(*p, newSize * sizeof(char));
            if(tmp == NULL) {
                perror("Realloc failed");
                break;
            }

            *p = tmp;

            for(int i = *size; i < newSize; i++) {
                printf("Enter character #%d: ", i+1);
                scanf(" %c", &(*p)[i]);
            }

            *size = newSize;
            printf("Expanded successfully.\n");
            break;

        case 2:

            printf("How many characters to remove: ");
            scanf("%d", &shrink);

            if(shrink <= 0 || shrink >= *size) {
                printf("Invalid amount\n");
                break;
            }

            newSize = *size - shrink;

            tmp = realloc(*p, newSize);
            if(tmp == NULL && newSize > 0) {
                perror("Realloc failed");
                break;
            }

            *p = tmp;
            *size = newSize;

            printf("Shrunk successfully.\n");
            break;

        case 3:
            free(*p);
            *p = NULL;
            *size = 0;
            printf("Memory freed.\n");
            break;

        case 4:
            return;

        default:
            printf("Invalid choice\n");
        }

        if(*p != NULL && *size > 0) {
            printf("\nCurrent characters:\n");
            for(int i = 0; i < *size; i++) {
                printf("[%d] = %c\n", i, (*p)[i]);
            }
        }
    }
}

void REALLOC_MANUAL_STRING(char **p, int *size) {

    int choice;
    int newLen;
    char buffer[1024];

    while(1) {

        printf("\n=== STRING REALLOC MENU ===\n");
        printf("1. Replace string\n");
        printf("2. Free\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {

        case 1:

            printf("Enter new string: ");
            fgets(buffer, sizeof(buffer), stdin);
            buffer[strcspn(buffer, "\n")] = '\0';

            newLen = strlen(buffer) + 1;

            char *tmp = realloc(*p, newLen);
            if(tmp == NULL) {
                perror("Realloc failed");
                break;
            }

            *p = tmp;
            strcpy(*p, buffer);
            *size = newLen;

            printf("String replaced.\n");
            break;

        case 2:
            free(*p);
            *p = NULL;
            *size = 0;
            printf("Memory freed.\n");
            break;

        case 3:
            return;

        default:
            printf("Invalid choice\n");
        }

        if(*p != NULL) {
            printf("Current string: %s\n", *p);
        }
    }
}
