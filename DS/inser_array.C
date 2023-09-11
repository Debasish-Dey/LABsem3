#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Elements already present are: ");
    int a;
    scanf("%d", &a);
    int *p=(int *) malloc(n*sizeof(int));
    printf("Enter %d elements: ",a);
    for(int i=0;i<a;i++){
        scanf("%d", &p[i]);
        printf("Enter elements to insert: ");
        int b;
        scanf("%d", &b);
        printf("To insert at beginning, Enter 1\n");
        printf("To insert in middle, Enter 2\n");
        printf("To insert at end, Enter 3\n");
        int x;
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            if(a>=n)
            printf("Array is Full");
            else{
                for(int i=a;i>=0;i--){
                    *(p+i+1) = *(p+i);
                    p[0] = b;
                    a++;
                }
            }
            break;
        case 2:
            if(a>=n)
            printf("Array is Full");
            else{
                printf("Enter index at which element is to be inserted: ");
                int in;
                scanf("%d", &in);
                for(int i=in;i>=in;i--){
                    *(p+i+1) = *(p+i);
                    p[in]=b;
                    a++;
                }
            }
            break;
        case 3:
        if(a>=n)
        printf("Array is Full");
        else{
            *(p+a)=b;
            a++;
        }
        
        default:
        printf("Wrong choice");
            break;

    }
    printf("Insertion Comlete");
    for(int i=0;i<a;i++){
        printf("%d ", p[i]);
    }
    return 0;

}
}