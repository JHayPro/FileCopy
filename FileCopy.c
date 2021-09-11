#include "FileCopy.h"

int main()
{
    printf("Please Enter The Source File:\n");
    scanf("%s", inputPath);

    printf("\n Please Enter A The Destination File:\n");
    scanf("%s", destPath);

    inputFile = fopen(inputPath, "r+");
    if (inputFile == NULL)
    {
        printf("\nERROR: Failed To Read In Input File\n");
        return 0;
    }

    destFile = fopen(destPath, "w+");
    if (destFile == NULL)
    {
        printf("\nERROR: Failed To Create In Destination File\n");
        return 0;
    }

    while (inC = fgetc(inputFile))
    {
        if (feof(inputFile))
            break;

        fputc(inC, destFile);
    }

    fclose(destFile);
    fclose(inputFile);

    printf("\nSuccess: File Copied\n");

    return 0;
}