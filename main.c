#include <stdio.h>
#include <string.h>

int spellCheck(char dictionary[100000][50],int listSize,char* keyword) {
        int mid, low = 0, high = listSize - 1;
        while (high >= low) {
            mid = (high + low) / 2; 
            if (strcmp(dictionary[mid],keyword) < 0)
                low = mid + 1;
            else if (strcmp(dictionary[mid],keyword)>0)
                high = mid - 1;
            else
                return mid;
        }
    return -1; //not found
}
/*
int spellCheck(char* word, char* dictionaryFileName){

    
    return 0;
}
*/

void main() {

    FILE *inputFile_ptr, *outputFile_ptr;
    char ch[50];
    char input_filename[50];
    char output_filename[50];

    printf("\n");
    printf("Enter the dictionary filename: ");
    scanf("%s", input_filename);
    printf("\n");

    //printf("Enter the output filename: ");
    //scanf("%s", output_filename);

    inputFile_ptr = fopen(input_filename, "r");
    //outputFile_ptr = fopen(output_filename, "w");

    if(inputFile_ptr == NULL /* || outputFile_ptr == NULL*/) {
        printf("Unable to open one of the files!\n\n");
        return;
    }
    
    int i = 0;
    static char dictionary[100000][50];
    int listSize = 93512;
    char exit[20];
    strcpy(exit, "exit");

    while(i != listSize) {
        fscanf(inputFile_ptr, "%s", &ch);
        strcpy(dictionary[i], ch);
        //fprintf(outputFile_ptr, "%s\n", dictionary[i]);
        i++;
    }
    //printf("Rows: %d", i);

    fclose(inputFile_ptr);

    do{
        char keyword[50];
        printf("Enter word to spell-check OR 'exit': ");
        scanf("%s", keyword);
        printf("\n");
        if(strcmp(keyword, exit) == 0) {
            printf("\n");
            printf("\n");
            break;
        }

        
        int value;
        value = spellCheck(dictionary, listSize, keyword);
        if (value == -1) {
            printf("You spelled the word incorrectly\n");
        }
        else if(value != -1) {
            printf("You spelled '%s' correctly\n", keyword);
        }
        printf("______________________________________________________\n", keyword);
        printf("\n", keyword);
        
    } while(1);




    //fflush(output_ptr);
    
    //fclose(output_ptr);
    
}