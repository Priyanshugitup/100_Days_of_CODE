// Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days days late: ₹6/day
// More than 30 days: Membership Cancelled.

#include <stdio.h>

int main(){
    int days;
    int fine;
    printf("Enter no. of LATE DAYS:\n");
    scanf("%d", &days);
    if(days <=0){
        printf("\nNO Fine. The book is nit late.\n");
    }
    else if(days <= 5){
        fine = days*2;
        printf("\nTotal FINE = Rs %d\n", fine);
    }
    else if(days <= 10){
        fine = (5*2) + (days - 5)*4;
        printf("\nTotal FINE = Rs %d\n", fine);
    }
    else if(days <= 20){
        fine = (5*2) + (5*4) + (days - 10)*6;
        printf("\nTotal FINE = Rs %d\n", fine);
    }
    else{
        printf("\nMembership Cancelled\n");
    }
    return 0;
}