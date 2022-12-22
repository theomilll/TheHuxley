#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int wellDefinedString(char *A){
    int i;
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int r;
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
        r = 0;
        return r;
    }
    if(A[0] == ']' && A[1] == '['){
        r = 0;
        return r;
    }
    if(A[0] == ')' && A[1] == '('){
        r = 0;
        return r;
    }
    if(count1 == 0 && count2 == 0 && count3 == 0){
        r = 1;
        return r;
    }
    return 0;
}

int enqueue(int *A, int SIZE){
    int arr[SIZE];
    int Front;
    int Rear;
    int insert_item;
    if (Front == - 1)
      
    Front = 0;
    insert_item = wellDefinedString(A);
    Rear = Rear + 1;
    arr[Rear] = insert_item;
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
            enqueue(A, 1000000);
            if(result == 1){
                printf("S\n");
            }
            else{
                printf("N\n");
            }
        }
    }
}
