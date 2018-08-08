# Clock
一个简单的计时器程序/A sample clock


#### 前言

随着时间一分分的过去，年龄也一在不停的增长，人到了年龄大了之后吧，对于养生就会越来越看重吧（虽然我才21岁，这不重要）。人会因为时间的久坐，导致颈椎和其他的健康问题，这一点有球是对于程序员来说，长时间的坐着，应该是普遍存在的。于是便有了这个小程序的诞生，一个小小的计时器程序。当然了，其中一定有很多写的不好的地方，后期还会优化哒。

#### 功能：
双击`clock.exe`直接运行就好。本程序基于winows系统,由devC++ 编写。为追求最简洁，没有用其余的IDE 进行编写。

* 输入要计时的时间，设定是以分钟为单位计时，最小为1分钟。
* 时间采用倒计时时间，当时间为0时，想起铃声。
* 铃声需要为`wav`格式。可自定义铃声，把自己喜欢的铃声进行替换就好。

#### 源代码

```
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
		printf("命令输入有误！！"); 
	}
	
	system("pause"); 
	
    
  return 0; 
}

```
#### 版本说明
1.0版，程序一定有不当之处，如果您有什么好的建议，请您提出。
![](http://images.cnblogs.com/cnblogs_com/yjlblog/1110802/o_jt.png)







