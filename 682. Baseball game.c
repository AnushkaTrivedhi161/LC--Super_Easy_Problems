int calPoints(char** operations, int operationsSize) {
    int a[operationsSize];
    int i;
    int j=0;
    for(i=0;i<operationsSize;i++)
    {
        if(strcmp(operations[i],"C")==0)
        {
            j--;
        }
        else if(strcmp(operations[i],"D")==0)
        {
            a[j++]=2*a[j-1];
        }
        else if(strcmp(operations[i],"+")==0)
        {
            a[j++]=a[j-1]+a[j-2];
        }
        else
        {
            a[j++]=atoi(operations[i]);
        }
    }
    int sum=0;
    for(i=0;i<j;i++)
    {
        sum+=a[i];
    }
    return sum;
}
