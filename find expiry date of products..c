#include <stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
struct pd1
 {
 	char name[100];
 	char company[100];
 	int batch;
 	float price;
 	struct date dd;
 }; 
int main(){
	struct pd1 pd[150];
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%s%s%d%f%d%d%d",pd[i].name,pd[i].company,&pd[i].batch,&pd[i].price,&pd[i].dd.day,&pd[i].dd.month,&pd[i].dd.year);
	}
	int yy=pd[0].dd.year,j=0,mm=pd[0].dd.month;
	for (int i = 1; i < n; ++i)
	{
		if(pd[i].dd.year<yy){
			yy=pd[i].dd.year;
			j=i;
		}
		else if(pd[i].dd.year==yy){
			if(pd[i].dd.month<pd[j].dd.month){
				mm=pd[i].dd.month;
				j=i;
			}
			else if(pd[i].dd.month==pd[j].dd.month){
				if(pd[i].dd.day<pd[j].dd.day){
					j=i;
				}
			}
		}	
	}

	printf("\n%s %s %d %.2f %d %d %d\n",pd[j].name,pd[j].company,pd[j].batch,pd[j].price,pd[j].dd.day,pd[j].dd.month,pd[j].dd.year);
	return 0;
}