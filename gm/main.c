#include <stdio.h>
#include "Johyeonseo.h"
int title()
{
	char screen[500];
	int a=0;
	while(a<15)
	{
		int b=0;
		while(b<30)
		{
			if(a==0||a==14)
			{
				screen[b]='*';
			}
			else if(b==0||b==29)
			{
				 screen[b]='*';
			}
			else if(a==3&&b==5)
			{
				screen[b]='h';
			}
			else if(a==3&&b==6)
			{
				screen[b]='y';
		    }
	        else if(a==3&&b==7)
			{
				screen[b]='e';
			}
		    else if(a==3&&b==8) 
                        {
                screen[b]='o';
			}
            else if(a==3&&b==9)
            {
                screen[b]='n';
			}
            else if(a==3&&b==10)
            {
                screen[b]='s';
			}
                        else if(a==3&&b==11)
            {
                screen[b]='e';
			}	
			else if(a==3&&b==12)
			{	screen[b]='o';
			
			}
			else if(a==3&&b==14)
			{        screen[b]='r';
			
			}
			else if (a==3&&b==15)
			{
				screen[b]='u';
			}
			else if(a==3&&b==16)
			{
				screen[b]='n';
			}
			else if(a==8&&b==5)
            {
                 screen[b]='1';
            }
			else if(a==8&&b==7)
            {
                 screen[b]='H';
             }
			else if(a==8&&b==8)
            {
                 screen[b]='o';
            }
             else if(a==8&&b==9)
            {
                 screen[b]='w';
            }
            else if(a==8&&b==11)
            {
                 screen[b]='t';
            }
            else if(a==8&&b==12)
            {
                 screen[b]='o';
             }
            else if(a==8&&b==14)
            {
                screen[b]='p';
            }
            else if(a==8&&b==15)
            {
                screen[b]='l';
            }
            else if(a==8&&b==16)
            {
                screen[b]='a';
            }
			else if(a==8&&b==17)
            {
                screen[b]='y';
            }
		
		

            else if(a==10&&b==5)
            {
                screen[b]='2';
            }
			else if(a==10&&b==7)
            {
                screen[b]='s';
            }
            else if(a==10&&b==8)
            {
                screen[b]='t';
            }
			 else if(a==10&&b==9)
            {
                screen[b]='a';
            }
			 else if(a==10&&b==10)
            {
                screen[b]='r';
            }
			 else if(a==10&&b==11)
            {
                screen[b]='t';
            }
			 else if(a==12&&b==5)
            {
                screen[b]='3';
            }
			 else if(a==12&&b==7)
            {
                screen[b]='E';
            }
			 else if(a==12&&b==8)
            {
                screen[b]='x';
            }
			 else if(a==12&&b==9)
            {
                screen[b]='i';
            }
			 else if(a==12&&b==10)
            {
                screen[b]='t';
            }
			else 
			{
			    screen[b]=' ';
		    } 
			b=b+1;
			}
			printf("%s\n",screen);
			a=a+1;
	}
		

}


