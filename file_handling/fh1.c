#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fp;
    fp = fopen("text.txt", "w");

    fprintf(fp, "Hello, World! \nMy name is \nMonkey D. LUFFY \nthe King Of Pirates!!\np/s: Im Hungry tho :)");

    fclose(fp);

    fp = fopen("text.txt", "r");

    // char line[100];
    // while(fgets(line, sizeof(line), fp) != NULL){
    //     printf("%s", line);
    // }

    char ch;
    while(fscanf(fp, "%c", &ch) != EOF){
        printf("%c", ch);
    }


    fclose(fp);

    return 0;
}

/*
For the first exercise, create a program that performs the following steps:

Open a text file for writing.
Write at least five lines of text into it.
Close the file.
Open the same file for reading.
Read each line and print it to the console.
Close the file.
*/
