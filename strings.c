#include <stdio.h>
#include <string.h>

// my function to get length of a string
int myOwnStrLen (char * string) {

    int count = 0;
    // all strings have '\0' at end for show the end line of string
    while(string[count] != '\0')
        count++;

    return count;
}

int main (void)
{
    // string literal as array
    char str[] = "When asked if this string had quotes in it, she replied, \"It does.\"";
    // string literal as pointer
    char *str2 = "Hello world"; // last character is '\0' so is the end of string so actually this string is "Hello world\0"

    str[0] = 'L'; // this is ok 

    /// str2[0] = 'z'; This returns for us a SEGMENTATION FAULT (core dumped) a string initialized as pointer dont may modify

    // getting a length of the string with strlen function of lib string.h
    size_t str_length = strlen(str2);
    printf("%zu \n", str_length);

    // getting a length of string with my function manually which returns a type integer
    int length = myOwnStrLen(str2);
    printf("%d \n", length);

    printf("%s \n", str2);


    char strcopy[11];

    strcpy(strcopy, str2); // strncpy(dest, src , size) is more secure 
    
    printf("My copy of str2 using strcpy %s \n", strcopy);
    
    return (0);
}