/*
	time:2018/8/8 
	version:1.0
	author:YJLAugus
	
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#pragma comment(lib,"winmm.lib")

void clock()
{
  int end;
  int i;
  int hour,min,s;
  printf("请输入要倒计时的时间,最少为1分钟哦(min)");
  scanf("%d",&end);
  end = end * 60; 
  i = end;
  printf("倒计时开始！\n");
  Sleep(1000);//延时1秒 
  system("cls");//清屏 
  hour = end/3600;
  min = (end-3600*hour )/60;
  s = end-3600*hour-60*min;

  while (i!= 0)
  {
    
    printf("%d小时%d分%d秒\n",hour,min,s); 
    printf("时间：%d秒",i);
    Sleep(1000);
    system("cls");
    i--;
	  
  }
  
  //printf("end!!");
  PlaySound(TEXT(".\\1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
  //getchar();
  printf("时间到了，休息一下吧!");
  printf("请选择接下来的操作：（1:重新计时；0:退出程序）");
  
}
int main(void)
{
  	int flag;
	clock();
	scanf("%d",&flag); 
	if(flag == 1)
	{
		
		PlaySound(NULL,NULL,SND_FILENAME);
		clock();
	}
	else if(flag == 0)
	{
		exit(0);
	}
	else
	{
		printf("命令输入有误！"); 
	}
	
	system("pause"); 
	
    
  return 0; 
}
