#include <stdio.h>

int main(){
    int totalseconds;
    int remainingseconds;
    printf("Enter the value of time in seconds:");
    scanf("%d", &totalseconds);
    printf("The value of time in hours:minutes:seconds format is %d:%d:%d", totalseconds/3600,(totalseconds%3600)/60,(totalseconds%60)%60);
    return 0;
}