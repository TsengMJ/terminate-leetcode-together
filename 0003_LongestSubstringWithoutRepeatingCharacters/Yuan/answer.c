#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *generage_alphabet();
int lengthOfLongestSubstring(char * s);

int main() {

    /*char *s = "test";*/
    /*char *s = "pwwkew";*/
    /*char *s = "abcabcbb";*/
    char *s = "bbbbbb";
    /*char *s = "au";*/
    /*char *s = "dvdf";*/

    int ans = lengthOfLongestSubstring(s);

    printf("%d \n", ans);
    return 0;
}


int lengthOfLongestSubstring(char *s) {

    // ascii table
    int *alphabet_dict;
    int str_len, str_num;
    int section, tmp, tmp_sum, max_sum;

    // section for beginning index of each loop
    // tmp is the conversion from ascii to alphabet table
    // tmp_sum is the sum of each loop

    alphabet_dict = malloc(95 * sizeof(int));
    memset(alphabet_dict, 0, 95);

    for (int j = 0; j < 95; j += 1)
        alphabet_dict[j] = 0;

    str_len = strlen(s);

    if (str_len == 0)
        return 0;
    if (str_len == 1)
        return 1;

    max_sum = 0;
    tmp_sum = 0;
    section = 0;

    for (int i = section; i < str_len; i += 1) {

        str_num = (int)s[i];

        tmp = str_num - 32;
        alphabet_dict[tmp] += 1;

        if (alphabet_dict[tmp] > 1) {
            if (tmp_sum > max_sum) {
                max_sum = tmp_sum;
            }

            memset(alphabet_dict, 0, 95);
            for (int j = 0; j < 95; j += 1)
                alphabet_dict[j] = 0;
            section += 1;
            i = section - 1;
            tmp_sum = 0;

            continue;
        }

        tmp_sum += 1;
    }

    if (tmp_sum > max_sum) {
        max_sum = tmp_sum;
    }

    return max_sum;
}
