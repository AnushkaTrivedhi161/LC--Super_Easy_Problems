char* firstPalindrome(char** words, int wordsSize) {
    int i,j;
    for(i=0;i<wordsSize;i++)
    {
            int  start=0;
            int  end=strlen(words[i])-1;
            while(start<end)
            {
                if(words[i][start]!=words[i][end])
                {
                    break;
                }
                start++;
                end--;
            }
            if(start>=end)
            {
                return words[i];
            }
    }
    return "";
}
