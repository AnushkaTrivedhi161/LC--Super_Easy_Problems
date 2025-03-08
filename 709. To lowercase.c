char* toLowerCase(char* s) {
    int i;
    for(i=0;s[i]!='\0';i++)
    {
        if(((int)s[i]>=65) && ((int)s[i]<=90))
        {
            s[i]=(int)s[i]+32;
        }
    }
    return s;
}
