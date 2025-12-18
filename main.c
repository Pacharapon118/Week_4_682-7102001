// Online C compiler to run C program online
#include <stdio.h>

void F2C(float fah){
    float cel = (fah - 32) * 5 / 9;
    printf("%.2f F Equal to %.2f C",fah,cel);
}

void C2F(float cel){
    float fah = (cel * 1.8) + 32;
    printf("%.2f C Equal to %.2f F",cel,fah);
}

int main() {
    float fah;
    float cel;
    int choice;
    
    do{
    
        printf("1.Fahrenheit To Celcius\n2.Celcius To Fahrenheit\nPlease enter your choice : ");
        scanf("%d",&choice);
    
    
        if(choice == 1){
            printf("Please enter temp(F) : ");
            scanf("%f",&fah);
            F2C(fah);
        }else if(choice == 2){
            printf("Please enter temp(C) : ");
            scanf("%f",&cel);
            C2F(cel);
        }else{
            printf("Invalid choice Please try again\n\n");
        }
    }while(choice != 1 && choice != 2);
    
    

    return 0;
}
