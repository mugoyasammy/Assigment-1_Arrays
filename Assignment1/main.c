#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void marks (){
 int PHY[1][4];

 double Average;
  printf("EnterPhysics marks ");
  printf("\n \n");
  int i,k;
  for (k=0;k<3;k++){
        double sum =0;
  for( i=0;i<1;i++){
    printf(" Enter Asg CW MID EOT");
    printf("\n \n");
    for(int j = 0;j<4;j++){
        scanf(" %d",&PHY[i][j]);
    }
  } printf("Asg\t Cw\t MID\t EOT");
    printf("\n \n");
    for (int i=0;i<1;i++){
    for(int j = 0;j<4;j++){
        printf(" %d\t",PHY[i][j]);
    sum=sum+PHY[i][j];
          Average = sum/4;
            printf("\n \n");

    }
    printf("The sum is:\t%.0lf",sum);
     printf("\n \n");
    printf("The Average mark is:\t%.2lf",Average);
  }
  printf("\n \n");
  if (k ==0){
  printf("Please Enter Marks for maths");
    printf("\n ");
      }
   else if(k==1){
    printf("Please Enter Chemistry marks");
      printf("\n ");
   }
   else{}
    printf("\n \n");

  }



}
int main(){
marks();

return 0;
}
/*int main(){

    int n,x;
printf("Enter the number of domestic animals ");
scanf("%d",&n);
printf("Enter the number of wild animals ");
scanf("%d",&x);
  char Domestic[n][6];
char Wild[x][6];
char Merged[n+x][13];
    int i,j;
// Prompting the user to enter the Domestic animals.
printf("Please Enter the Domestic animals");
printf("\n");
for(int i =0;i<n;i++){
    scanf("%s",&Domestic[i]);
}
// Prompting the user to enter the Wild animals.
printf("\n\n");
printf("Please enter the Wild animals");
printf("\n");
for( j =0;j<x;j++){
    scanf("%s",&Wild[j]);
}
//printf("\n\n");
// Copying Domestic animals into merged array.
for (int i =0;i<n+x;i++){
    strcpy(Merged[i],Domestic[i]);
}
// Copying wild animals into merged array.
     printf("\n");
for (int j=0;j<n+x;j++){
    strcpy(Merged[n+j],Wild[j]);
}
// Printing Merged array
     printf("\n");
for (int i = 0;i<n+x;i++){
printf("%s\n",Merged[i]);}
return 0;
}*/
