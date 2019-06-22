#include<stdio.h>
#include<string.h>
struct Student
{
int num;
char name[20];
char major[20]; 
float score;
};
int main()
{
struct Student stu[5]={
{2018111,"Zhang","网络编程",78},
{2018112,"wang","网络工程",98},
{2018113,"Li","大数据",86},
{2018114,"Ling","云分析",73.5},
{2018115,"Sun","软件工程",100}
};
struct Student temp;
const int n=5;
int i,j,k;
for(i=0;i<n-1;i++)
{
k=i;
for(j=i+1;j<n;j++)
if(stu[j].score>stu[k].score)
k=j;
temp=stu[k];
stu[k]=stu[i];
stu[i]=temp;
}
for(i=0;i<n;i++)
printf("%6d  %8s  %8s  %6.2f\n",stu[i].num,stu[i].name,stu[i].major,stu[i].score);
return 0;
}
