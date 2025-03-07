bool checkIfPangram(char* sentence) {
    int i;
    int freq[256]={0};
    char s[]="abcdefghijklmnopqrstuvwxyz";
    for(i=0;sentence[i]!='\0';i++)
    {
        for(int j=0;s[j]!='\0';j++)
        {
            if(sentence[i]==s[j])
            {
                 freq[s[j]]++;
            }
        }
    }
    int c=0;
    for(i=0;s[i]!='\0';i++)
    {
        if(freq[s[i]]>=1)
        {
            c++;
        }
    }
    if(c>=26)
       return true;
    else   
       return false;
}
