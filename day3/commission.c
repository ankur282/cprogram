#include<stdio.h>

int main()
{
int amt_c, amt_m, num_c, num_m, c_total, m_total;
float cum,cum1;
printf("Enter the number of cpu:");
scanf("%d",&num_c);

printf("Enter the amount of the cpu:");
scanf("%d",&amt_c);

printf("Enter the number of monitor:");
scanf("%d",&num_m);

printf("Enter the amount of the monitor:");
scanf("%d",&amt_m);

c_total=amt_c*num_c;
m_total=amt_c*num_m;


if (c_total>=10000 && c_total<25000)
{
	cum=c_total*0.8;
	printf("cpu%f\n",cum);

}
else if(c_total>=25000);
{
	cum=2000+10*(c_total-25000);	
	printf("cpu %f\n",cum);

}




if (m_total<10000)
{
cum1=0.8*m_total;
printf("monitor %f\n",cum);


}

else if (m_total>=10000)
{
cum1=0.05*10000+0.08*(m_total-10000);
printf("monitor %f\n",cum1);
}
else
{
printf("no commission");
}
















}
