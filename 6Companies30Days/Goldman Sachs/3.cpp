string encode(string src)
{
    string ans;
    int count;
    char ch;
    
    count=0;
    ch = src[0];
    
    for(int i=0;i<src.length();i++)
    {
        if(ch==src[i])
        {
            count++;
        }
        else
        {
            ans = ans + ch + to_string(count);
            count=1;
            ch=src[i];
        }
        
        if(i==src.length()-1)
        {
            ans = ans + ch + to_string(count);
            count=1;
            ch=src[i];
        }
    }
    
    return ans;
}