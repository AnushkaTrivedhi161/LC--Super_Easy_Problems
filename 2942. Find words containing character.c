/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int* b=(int*)malloc(sizeof(int)*wordsSize);
    int i,j,k=0;
    for(i=0;i<wordsSize;i++)
    {
        for(j=0;words[i][j]!='\0';j++)
        {
            if(words[i][j]==x)
            {
                b[k]=i;
                k++;
                break;
            }
        }
    }
    *returnSize=k;
    return b;
    free(b);

}
