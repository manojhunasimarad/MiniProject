void view()
{
    int n,i,j=0,a=0,sum=0,g,flag,num;
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number=%d\n",i);
        printf("Name = ");
        puts(x[i].name);
        printf("Disease = ");
        puts(x[i].disease);
        printf("Cabin no = %d\nPhone number = 0%d\nAge=%d",x[i].cabin,x[i].phone,x[i].age);
        printf("\n\n");
    }
}