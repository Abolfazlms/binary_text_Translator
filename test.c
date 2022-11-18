#include <stdio.h>
#include <string.h>

int s2[1000];
int power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }
    else
        return x*power(x,y-1);
}
int binary(char c)
{
    int i=0;
    int k=0;
    int j=0;
    int c2=(int)c;
    int d=0;
    int s[1000];
    int s2[1000];
    for(i=0;i<1000;i++)
    {
        s[i]=c2%2;
        c2=c2/2;
        k++;
        if(c2==0)
        {
            break;
        }

    }
    if(k<8)
    {
        for(j=k;j<8;j++)
        {
          printf("%d",0);
        }

    }

    for(i=k-1;i>=0;i--)
    {
        printf("%d",s[i]);
    }

}

main()
{
    char s1[1000];
    char s2[1000];
    int s3[1000];
    int i=0;
    int j=0;
    int a;
    int b=0;

    printf("1- Text to Binary \n");
    printf("2- Binary to text\n");
    printf("Enter an number : ");
    scanf("%d\n",&b);

    if(b==1)
    {
        gets(s1);

        for(i=0;i<strlen(s1);i++)
        {
            binary(s1[i]);
        }

    }
    else if(b==2)
    {
        gets(s1);

        for(i=0;i<strlen(s1);i++)
        {
            s3[i]=(int)s1[i]-48;
        }
        for(j=0;j<(strlen(s1))/8;j++)
        {
            int l=0;
            int result=0;
            int k=((j+1)*8)-1;
            int h=k-7;
            for(k=k;k>=h;k--)
            {
                result+=power(2,l)*s3[k];
                l++;
            }
            printf("%c",(char)result);

        }

    }

    


}
