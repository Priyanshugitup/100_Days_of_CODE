// Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main(){
    float SP,CP,Profit,Loss;// SP = Selling Price, CP = Cost Price..
    printf("Enter COST PRICE:\n");
    scanf("%d", &CP);
    printf("Enter SELLING PRICE:\n");
    scanf("%d", &SP);
    Profit = SP - CP;
    Loss = CP - SP;
    if(SP > CP){
        printf("Profit is %.2f%%",(Profit/CP) * 100);
    }
    else if(CP > SP){
        printf("Loss is %.2f%%", (Loss/SP) * 100);
    }
    else{
        printf("No Profit No loss");
    }
    return 0;
}