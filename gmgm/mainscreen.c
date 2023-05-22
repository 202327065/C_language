#include "screen.h"
#include <stdio.h>

int title(char* screen, int width, int height)
{
    int w = 0;
    int h = 0;
    while (h < height)
    {
        while (w < width)
        {
            if(w == width - 1)
            {
                screen[w +(h * (width))] = '\n';
            }
            else
            {
                if(w == 0 || w == width - 2 || h == 0 || h== height -1)
                {
                    screen[w + (h * (width))] = '#';
                }
                else
                {
                    screen[w + (h * (width))] = ' ';
                }
            }
            w = w + 1;
        }
        w = 0;
        h = h + 1;
    }
    screen[height * width] = '\0';
    return 0;
}                        

int writeString(const char* string, char* screen, int width, int x, int y)
{
    int index = x + (y * width ); // 위치에 해당하는 인덱스 계산
    
    int i = 0;

    while (string[i] != '\0')
    {
        screen[index + i] = string[i];
        i++;
    }
    
    return 0;
}

int hyeonseorunsettitle(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("H y e o n s e o R u n", screen, width,11,3);
    
    writeString("1. Game Start", screen, width,16,10);
    writeString("2. How to play?", screen, width,16,12);
    writeString("3. Exit", screen, width,16,14);    
}

int sethow(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("Earn points by avoiding obstacles", screen, width, 7, 5);
    
    writeString("Return to menu?", screen, width, 17, 13);
    writeString("1.Yes", screen, width, 16, 15);
    writeString("2.No", screen, width, 29, 15);    
}

int setexit(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("Are you sure you want to quit the game?", screen, width, 5, 4);
 
    writeString("1.Yes", screen, width, 16, 15);
    writeString("2.No", screen, width, 29, 15);     
}
