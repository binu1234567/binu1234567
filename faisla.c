#include<stdio.h>
int main(){
int age;
printf("Enter your age: \n");
scanf("%d", &age);
if (age>=18){
printf("Yes you can vote!\n");
}
else {
printf("NO you cannot vote!!!\n");
}
return 0;
}
