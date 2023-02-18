int main()
{
int i,num=0,rev=0,rem=0,tem=num;
printf("Enter the number:");
scanf("%d",&num);

while(num>0)
{
rem=num%10;
rev=rev*10+rem;
num=num/10;
}
if (tem==num){
printf("your number is pal :%d\n",rev);
}
else
{
printf("This is not\n");}
}
