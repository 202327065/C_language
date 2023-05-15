#include <stdio.h>
#include "Johyeonseo.h"
int howtoplay()
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
				screen[b]='T';
			}
			else if(a==3&&b==6)
			{
				screen[b]='h';
			}
		    else if(a==3&&b==7)
			{
				screen[b]='e';
			}
			else if(a==3&&b==9)
			{
				screen[b]='g';
			}
			else if(a==3&&b==10)
			{
				screen[b]='a';
			}
			else if(a==3&&b==11)
			{
				screen[b]='m';
			}
			else if(a==3&&b==12)
			{
				screen[b]='e';
			}
			else if(a==3&&b==14)
			{
				screen[b]='i';
			}
			else if(a==3&&b==15)
			{
				screen[b]='n';
			}
			else if(a==3&&b==16)
			{
				screen[b]='v';
			}
			else if(a==3&&b==17)
			{
				screen[b]='o';
			}
			else if(a==3&&b==18)
			{
				screen[b]='l';
			}
			else if(a==3&&b==19)
			{
				screen[b]='v';
			}
			else if(a==3&&b==20)
			{
				screen[b]='e';
			}
			else if(a==3&&b==21)
			{
				screen[b]='s';
			}
			else if(a==3&&b==22)
			{
				screen[b]='c';
			}
			else if(a==4&&b==5)
			{
				screen[b]='o';
			}
			else if(a==4&&b==6)
			{
				screen[b]='n';
			}
			else if(a==4&b==7)
			{
				screen[b]='t';
			}
			else if(a==4&&b==8)
			{
				screen[b]='r';
			}
			else if(a==4&&b==9)
			{
				screen[b]='o';
			}
			else if(a==4&&b==10)
			{
				screen[b]='l';
			}
			else if(a==4&&b==11)
			{
				screen[b]='l';
			}
			else if(a==4&&b==12)
			{
				screen[b]='i';
			}
			else if(a==4&&b==13)
			{
				screen[b]='n';
			}
			else if(a==4&&b==14)
			{
				screen[b]='g';
			}
			else if(a==4&&b==16)
			{
				screen[b]='a';
			}
            else if (a==4&&b==17)
			{
				screen[b]='d';
			}
			else if(a==4&&b==18)
			{
				screen[b]='i';
			}
			else if(a==4&&b==19)
			{
				screen[b]='n';
			}
			else if(a==4&&b==20)
			{
				screen[b]='o';
			}
			else if(a==4&&b==21)
			{
				screen[b]='s';
			}
			else if(a==4&&b==22)
			{
				screen[b]='a';
			}
			else if(a==4&&b==23)
			{
				screen[b]='u';
			}
			else if(a==4&&b==24)
			{
				screen[b]='r';
			}
			else if(a==5&&b==5)
			{
				screen[b]='t';
			}
			else if(a==5&&b==6)
			{
				screen[b]='o';
			}
			else if(a==5&&b==8)
			{
				screen[b]='j';
			}
			else if(a==5&&b==9)
			{
				screen[b]='u';
			}
			else if(a==5&&b==10)
			{
				screen[b]='m';
			}
			else if(a==5&&b==11)
			{
				screen[b]='p';
			}
			else if(a==5&&b==12)
			{
				screen[b]='a';
			}
			else if(a==5&&b==14)
			{
				screen[b]='n';
			}
			else if(a==5&&b==15)
			{
				screen[b]='d';
			}
			else if(a==5&&b==16)
			{
				screen[b]='a';
			}
			else if(a==5&&b==18)
			{
				screen[b]='v';
			}
			else if(a==5&&b==19)
			{
				screen[b]='o';
			}
			else if(a==5&&b==20)
			{
				screen[b]='i';
			}
			else if(a==5&&b==21)
			{
				screen[b]='d';
			}
			else if(a==6&&b==5)
			{
				screen[b]='o';
			}
			else if(a==6&&b==6)
			{
				screen[b]='b';
			}
			else if(a==6&&b==7)
			{
				screen[b]='s';
			}
			else if(a==6&&b==8)
			{
				screen[b]='t';
			}
			else if(a==6&&b==9)
			{
				screen[b]='a';
			}
			else if(a==6&&b==10)
			{
				screen[b]='c';
			}
			else if(a==6&&b==11)
			{
				screen[b]='l';
			}
			else if(a==6&&b==12)
			{
				screen[b]='e';
			}else if(a==6&&b==13)
			{
				screen[b]='s';
			}
			else if(a==6&&b==15)
			{
				screen[b]='w';
			}
			else if(a==6&&b==16)
			{
				screen[b]='h';
			}
			else if(a==6&&b==17)
			{
				screen[b]='i';
			}
			else if(a==6&&b==18)
			{
				screen[b]='l';
			}
			else if(a==6&&b==19)
			{
				screen[b]='e';
			}
			else if(a==7&&b==5)
			{
				screen[b]='e';
			}
			else if(a==7&&b==6)
			{
				screen[b]='a';
			}
			else if(a==7&&b==7)
			{
				screen[b]='r';
			}
			else if(a==7&&b==8)
			{
				screen[b]='n';
			}
			else if(a==7&&b==9)
			{
				screen[b]='i';
			}
			else if(a==7&&b==10)
			{
				screen[b]='n';
			}
			else if(a==7&&b==11)
			{
				screen[b]='g';
			}
			else if(a==7&&b==12)
			{
				screen[b]='p';
			}
			else if(a==7&&b==14)
			{
				screen[b]='o';
			}
			else if(a==7&&b==15)
			{
				screen[b]='i';
			}
			else if(a==7&&b==16)
			{
				screen[b]='n';
			}
			else if(a==7&&b==17)
			{
				screen[b]='t';
			}
			else if(a==7&&b==18)
			{
				screen[b]='s';
			}
			else if(a==7&&b==19)
			{
				screen[b]='.';
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
		
				
					return 0;}


