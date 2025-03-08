bool judgeCircle(char* moves) {
    int i;
    int st=0;
    int ts=0;
    for(i=0;moves[i]!='\0';i++)
    {
        if(moves[i]=='R')
        {
            ++st;
        }
        else if(moves[i]=='L')
        {
            --st;
        }
        else if(moves[i]=='U')
        {
            ++ts;
        }
        else if(moves[i]=='D')
        {
            --ts;
        }
    }
    if(st == 0 && ts==0)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}
