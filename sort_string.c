/*Basic Program to sort a string using swap and 2 for loops 
    This might be better optimised*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {

    char s1[100],temp;
    printf("Enter a String\n");
    scanf("%s",&s1);
    printf("\nThe Original String:\t%s\n",s1);
    int n = strlen(s1);
    int i,j;
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(s1[i]>s1[j]){
                temp = s1[j];
                s1[j] = s1[i];
                s1[i] = temp;
            }
        }
    }
    
    printf("The Sorted String is:\t%s",s1);
    return 0;
}


