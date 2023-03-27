int main()
{
    int ret;
    printf("I am going to exec an 'ls' progrem\n ");
    ret = execlp("ls","ls","-l",0);


    printf("i executed ls program %d\n",ret);
  

}