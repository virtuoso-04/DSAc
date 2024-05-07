#include <stdio.h>

void ToH(int n, char source, char space, char dest);
static int step=0;
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    ToH(n,'A','B','C');
    return 0;
}

void ToH(int n, char A, char B, char C){
    if(n==1){
        printf("Step %d: Move disk 1 from %c to %c\n",++step,A,C);
        return;
    }
    else{
        ToH(n-1,A,C,B);
        ToH(1,A,B,C);
        ToH(n-1,B,A,C);
    }
}