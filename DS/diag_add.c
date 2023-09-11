#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of Rows: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter %d elements: ", n*n);
    for (int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<n;i++){
        s = s + arr[i][i];
    }
    printf("Sum of diagonal elements is %d", s);
    printf("\n");
    return 0;

}