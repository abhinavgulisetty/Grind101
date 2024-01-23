#include<stdio.h>
#include<string.h>
int main (int argc, char *argv[]) {
    char name[10][8],temp[10];
    int i,j,n;
    printf("Enter n-values\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%s",name[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(strcmp(name[i],name[j])>0){
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }
    printf("Sorted names\n");
    for (int i = 0; i <n ; i++) {
        printf("%s\n",name[i]);
    }
    return 0;
}
