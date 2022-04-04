#include <stdio.h>

int checkForAttack(int a, int b, int c, int d)
{
    if(a == c || b==d) //checking if in same row
    {
        printf("YES\n");
    }
    else if(a==c && b==d)
    {
        printf("YES\n");
    }
    else printf("NO\n");
    return 0;
}

int main(void) {
	// your code goes here
	// accepting number of cases
	int n; 
	scanf("%d", &n);
	
	//accepting the 2 rooks positions
	int a,b,c,d;
	for(int index=0; index < n; index++)
	{
	    scanf("%d %d %d %d", &a,&b,&c,&d);
	    checkForAttack(a,b,c,d); //sending for checking 
	}
	return 0;
}

