#include<stdio.h>
#define MAX_ITEMS 100

double computemaxvalue(double w , double weight[] , double value[] , double ratio[] , int nitems);

int getnextitem(double weight[] , double value[] , double ratio[] , int nitems);

int main(){
int nitems;
double w;
double weight[MAX_ITEMS];
double value[MAX_ITEMS];
double ratio[MAX_ITEMS];

printf("Enter the number of items:");
scanf("%d",&nitems);

printf("Enter the weights of the items:\n");
for(int i=0 ; i< nitems ; i++){
scanf("%lf",&weight[i]);
}
printf("Enter the values/profits of the \n");
for(int i =0 ; i<nitems ; i++){
scanf("%lf",&value[i]);
}

for(int i=0 ; i<nitems ; i++){
ratio[i]=value[i]/ weight[i];
}

printf("Enter the capacity of the knapsack");
scanf("%lf",&w);

printf("\n the maximum value is a knpasakc of the capacity %.2f is : %.2f \n",w,computemaxvalue(w,weight,value,ratio,nitems));

return 0;
}
double computemaxvalue(double w , double weight[] , double value[] , double ratio[] , int nitems){

double cw=0;
double cv=0;

printf("\n Items considered are:");
while(cw<w){
int item = getnextitem(weight,value , ratio , nitems);
if(item==-1){
break;
}

printf("%d",item+1);
if(cw+weight[item]<=w){
cw+=weight[item];
cv+=value[item];
ratio[item]=0;
}else{
cv+=(ratio[item]*(w-cw));
cw+=(w-cw);
break;
}
}
return cv;
}

int getnextitem(double weight[] , double value[] , double ratio[] , int nitems){
double highest=0;
int index=-1;
for(int i =0 ; i<nitems ; i++){
if(ratio[i]>highest){
highest=ratio[i];
index=i;
}
}
return index;
}
