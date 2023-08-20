#include <stdio.h>
#include <string.h>

int main(void) {
    int T;
    scanf("%d", &T);
   
    while (T--) {
        int count = 0;
        char S[1000];
        scanf("%s", S);
     
        for (int i = 0; S[i]; i++) {
            if (strchr("aeiou", S[i])) {
                count++;
                if (count > 2) {
                    break;
                }
            } else {
                count = 0;
            }
        }
        
        printf(count > 2 ? "Happy\n" : "Sad\n");
    }

    return 0;
}
