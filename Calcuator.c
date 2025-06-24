#include<stdio.h>
#include<math.h>
double divisions(double , double);
double modulus(int , int);
void printMenu();

int main()
{
    int choice;
    double first, second , result;
   
    while(1){   
        printMenu();
    scanf("%d",&choice);
    if(choice==7)
    {
        printf("\n  THANK YOU............\n\n Developed By BASAVANNI\n\n");
        break;
    }
    if(choice<0 || choice>7){
        printf("invalid choice\nuse choice option between (1-7)");
    }
    else{
    printf("enter the First number: ");
    scanf("%lf",&first);
    printf("Enter the Second number:");
    scanf("%lf",&second);

   
    switch (choice)
    {
    case 1: //add
           result = first + second;
        break;
        case 2: // sub
            result = first - second;
        break;
        case 3: //mul
            result = first * second;
        break;
        case 4: //div
            result = divisions(first , second);
        break;
        case 5: //modulus
            result = modulus(first , second);
        break;
        case 6: //power
             result = pow(first , second);
        break;
    
    default:
        break;
       
    }
    if(!isnan(result)){
    printf("the result is:%.2lf \n",result);
    }
}
};


    return 0;
}
double divisions(double a, double b){
    if(b==0){
        printf("invalid argument for division\n");
        return NAN;
    }
    else{
        return a/b;
    }
    
}

double modulus(int a, int b)
{
    if(b==0){
        printf("invalid argument for modulus\n");
        return NAN;
    }
    else{
        return a % b;
    }   
}
void printMenu()
{
    printf("\n\n------------------------------------------------------------------------");
    printf("\nWelcome to Simple Calculator\n");
    printf("\nChoose one of the following options: ");
    printf("\n1. Addition ");
    printf("\n2. Subtraction ");
    printf("\n3. Multiplication ");
    printf("\n4. Division ");
    printf("\n5. Modulus ");
    printf("\n6. Power ");
    printf("\n7. Exit ");
    printf("\nchoose your option: ");
}