#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int x[MAX];
int s[MAX];
int d , flag = 0;

void sumofsub(int m , int k , int r);
void inputarray(int arr[] , int n);

int main()
{
int n , sum = 0;
printf("ENter the number of elements");
scanf("%d",&n);
printf("Enter the elements\n");
inputarray(s,n);
printf("Enter the value of d:");
scanf("%d",&d);
for(int i = 1 ; i <= n ; i++)
{
sum += s[i];
}
if(sum < d || s[1] > d)
{
printf("The given problem instance does not have a solution \n");
return 0 ;
}else{
printf("subset are \n");
sumofsub(0,1,sum);
}
if(flag==0){
printf("No subset possible \n");
}
return 0 ;
}
void sumofsub(int m , int k , int r)
{
int i ;
x[k]=1;
if(m+s[k] == d)
{
flag = 1;
printf("{ ");
for(i=1; i<=k ;i++){
if(x[i] == 1){
printf("%d ", s[i]);
}
}
printf("}\n");
}else if((m+s[k]+s[k+1])<=d){
sumofsub(m+s[k],k+1,r-s[k]);
}
if((m+r-s[k]>=d)&&(m+s[k+1]<=d)){
x[k]=0;
sumofsub(m,k+1,r-s[k]);
}
}

void inputarray(int arr[] , int n){
for(int i =1 ; i<= n ; i++){
scanf("%d" , &arr[i]);
}
}
