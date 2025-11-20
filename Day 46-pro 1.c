#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int areAnagrams(const char *str1, const char *str2) {
    int count1[256] = {0}; 
    int count2[256] = {0};

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0; 
    }

    for (int i = 0; i < len1; i++) {
        count1[(unsigned char)str1[i]]++;
    }

    for (int i = 0; i < len2; i++) {
        count2[(unsigned char)str2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            return 0;
        }
    }

    return 1; 
}

int main() {
    char s1[] = "listen";
    char s2[] = "silent";
    char s3[] = "hello";
    char s4[] = "world";
    char s5[] = "anagram";
    char s6[] = "nagaram";

    if (areAnagrams(s1, s2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", s1, s2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", s1, s2);
    }

    if (areAnagrams(s3, s4)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", s3, s4);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", s3, s4);
    }

    if (areAnagrams(s5, s6)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", s5, s6);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", s5, s6);
    }

    return 0;
}