int numberOfEmployeesWhoMetTarget(int* hours, int hoursSize, int target) {
    int i;
    int c=0;
    for(i=0;i<hoursSize;i++)
    {
        if(hours[i]>=target)
            c++;
    }
    return c;
}
