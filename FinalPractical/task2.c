#include<stdio.h>
#include<conio.h>
int main() {
    int input[8] = { 176, 79, 34, 60, 92, 11, 41, 114 };
    int head = 50;
   
    int a[9] = { 176, 79, 34, 60, 92, 11, 41, 114, head};
    int temp;
    int i, j;  
    
    printf("Before Sorting ");
    
    for(i=0; i<9; i++)
    {
        printf("%d ",a[i]);
    }
    
    for(i=0; i<9; i++)
    {
        for(j=i+1; j<9; j++) { if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
     printf("\nAfter Sorting ");
    for(i=0; i<9; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int l=0;

    for (int i=0;i<9;i++){
        if (a[i]==head){
            l=i;
            printf("\nl = %d",l);
            head = a[l];
            printf("\nhead= %d",head);
            break;
        }

    }


    
    int seek = 0;
     int direction = 0;

printf("\nl =  %d", l);

    if(direction == 0){
        for(int k=l; k>=0; k--){
            printf("\nk = %d",k);
        if(k==0){
            seek = seek + (head + head);
            break;
            head=0;
            printf("\n%d",head);
        }
        seek = seek + (head - a[k-1]);
        printf("\nseek =  %d",seek);
        head = a[k-1];
        printf("\nhead =  %d\n\n",head);
        }
        direction=1;
    }

printf("\n");


    if(direction == 1){
        for(int m=0; m<9; m++){

            printf("\nseek =  %d",seek);
            printf("\nhead =  %d",head);

            seek = seek + (a[m+1]-head);
            printf("\nseek =  %d",seek);
            
            head = a[m+1];
            printf("\nhead =  %d\n\n",head);
        }
        direction=0;
    }

    printf("\nseek = %d ",seek);
    
}


































































