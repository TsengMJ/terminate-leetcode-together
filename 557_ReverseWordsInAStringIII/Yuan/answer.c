#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverseWords(char *s);

int main() {

    char str[] = "Let's take LeetCode contest";
    char *ans;

    ans = reverseWords(str);

    printf("%s\n", ans);

    return 0;
}

char* reverseWords(char *s) {
    int len = strlen(s);
    char *ans = (char*)malloc((len+1)*sizeof(char));
    int count, i, j, section = 0;

    strcpy(ans, s);
    for (i = 0, count = 0; i < len+1; i++, count++){
        if (s[i] == ' ' || s[i] == '\0'){
            section = i - count;
            for (j = section; j < i; j += 1) {
                ans[j] = s[section+count-1];
                count -= 1;
            }
            if (i == len)
                ans[i] = '\0';
            else
                ans[i] = ' ';
            count -= 1;
        }
    }

    return ans;
}
