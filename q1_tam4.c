#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wellDefinedString(char *A){
    int i;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for(i = 0; i < strlen(A); i++){
        if(A[i] == '('){
            count1++;
        }
        else if(A[i] == ')'){
            count1 = count1 - 1;
        }
        if(A[i] == '['){
            count2++;
        }
        else if(A[i] == ']'){
            count2 = count2 - 1;
        }
        if(A[i] == '{'){
            count3++;
        }
        else if(A[i] == '}'){
            count3 = count3 - 1;
        }
    }
    if(A[0] == '}' && A[1] == '{'){
        return 0;
    }
    if(count1 == 0 && count2 == 0 && count3 == 0){
        return 1;
    }
    return 0;
}

int main(){
    char A[1000000];
    int T;
    int result;
    scanf("%d", &T);
    if(T <= 1 || T <= 20){
        for (int i = 0; i < T; i++){
            scanf("%s", A);
            result = wellDefinedString(A);
            if(result == 1){
                printf("S\n");
            }
            else{
                printf("N\n");
            }
        }
    }
}