/* program to perform the following operators on Strings without using String functions
a. To find the Length of String.
b. To concatenate two string.
C. To find Reverse of a string.
d. To copy one string to another string.*/
#include <stdio.h>
int stringLength(char str[]) {
    int i = 0;
    while(str[i] != '\0') {
        i++;
    }
    return i;
}

void stringConcat(char str1[], char str2[]) {
    int i = 0, j = 0;
    // Find end of first string
    while(str1[i] != '\0') {
        i++;
    }

    // Append second string to first
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null terminate
}

void stringReverse(char str[]) {
    int len = stringLength(str);
    int i;
    char temp;

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void stringCopy(char source[], char destination[]) {
    int i = 0;
    while(source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Null terminate
}

int main() {
    char str1[100], str2[100], str3[100];
    int len;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Remove newline if present from fgets
    int i = 0;
    while(str1[i] != '\0') {
        if(str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    i = 0;
    while(str2[i] != '\0') {
        if(str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    // a) Length of first string
    len = stringLength(str1);
    printf("Length of first string: %d\n", len);

    // b) Concatenate second string to first
    stringConcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    // c) Reverse the concatenated string
    stringReverse(str1);
    printf("Reversed string: %s\n", str1);

    // d) Copy concatenated string to str3
    stringCopy(str1, str3);
    printf("Copied string: %s\n", str3);

    return 0; }
