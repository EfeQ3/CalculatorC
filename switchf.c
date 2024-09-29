#include <stdio.h>
//Efecan Kocabayramoğlu
int main()
{
    int num,num1,result,isl;
     
    printf("\n Select a transaction : 1(+) 2(-) 3(*) 4(/) \n");
    scanf("\n %d",&isl);
    printf("\n Enter a number: ");
    scanf("%d",&num);
    printf("\n Enter one more number: ");
    scanf("%d",&num1);

    switch (isl)
    {
    case 1:
    result = num1+num;
        printf("\n Result = %d",result);
        break;
    case 2:
        result = num-num1;
        printf("\n Result = %d",result);
        break;
    case 3:
        result = num * num1;
        printf("\n Result = %d",result);

        break;
    case 4:
    if (num,num1 <= 0)
    {
        printf("Thats Not A vaild number for this transiction");
    }
    else{
        result = num/num1;
        printf("\n Result : %d",result);

    }
           
        break;
    
    default:
    printf("thats not a vaild selection");
        break;
    }
    
}