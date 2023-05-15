#include <stdio.h>
#include "Johyeonseo.h"
int main()
{
    title();
    int game_state = 1;
    int input = 0;
    while (game_state)
    {
        scanf("%d",&input);
        if(input==2)
        {
            howtoplay();
            while(game_state)
            {
                scanf("%d",&input);
                if (input==1)
                {
                    title();
                    game_state=0;
                }
                else if(input==2)
                {
                    howtoplay();
                }
                else
                {
                    game_state=1;
                }
            }
            game_state=1;
            
        }
        if(input==3)
        {
            
          
                game_state=0;
            
          
            
        }
    }
    return 0;
}
