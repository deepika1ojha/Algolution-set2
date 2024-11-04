#include <stdio.h>
#include <string.h>

void lower(char *S, int n)
{
    for(int i=0; i<n; i++)
    {
        if(S[i]>=97 && S[i]<=122)
        {
            S[i] = S[i]-32;
        }
    }
}
int remove_char(char *S, int n, int i)
{                                               //  15 16 17 18 19 20  n=21
    int j;
    for(j=i; j<n-1; j++) //j= "A man, a plan, a canal: P  a  n  a  m  a "
    {
        S[j] = S[j+1];
        
    }
    S[j] = '\0';
    return n-1;
}
int alpha_num(char *S, int n)
{
    for(int i=0; i<n;)
    {
        if(!( (S[i] >= 48 && S[i] <= 57) || (S[i] >= 65 && S[i] <= 90) || (S[i] >= 97 && S[i] <= 122) ))
        {
            
            n = remove_char(S, n, i);
        }
        else
        {
            i++;
        }
    }
    return n;
}
int is_pallindrome(char S[], int n)
{
    lower(S, n);
    n = alpha_num(S, n);
    
    for(int i=0, j=n-1; i<=j; i++, j--)
    {
        if(S[i] != S[j])
        {
            return -1;
        }
    }
    return 1;
}

int main()
{
    char S[]= "Mr. Owl ate my metal worm";
    int n = strlen(S);
    int result = is_pallindrome(S, n);
    if(result==1)
    {
        printf("Is Palindrome");
    }
    else
    {
        printf("Is non-Palindrome");
    }
    return 0;
}
