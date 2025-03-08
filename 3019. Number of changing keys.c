int countKeyChanges(char* s) {
    int i;
    int c=0;
    for(i=0;s[i]!='\0',s[i+1]!='\0';i++)
    {
            if(s[i]!=s[i+1])
            {
                if(!(s[i]==s[i+1]+32 || s[i]==s[i+1]-32))
                {
                    ++c;
                }
            }
    }
    return c;
}
