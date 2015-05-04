// t1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stdlib.h"
#include <time.h>

int _tmain( )
{
	srand(time(NULL)); //避免题目重复
	int x1,x2,flag,i,j,k;
	int x3,x4;
	int a[10];
	printf("---------------------------欢迎使用本系统打印题目！----------------------------\n");
	//可定制打印的题目数
	printf("请输入要打印的题目数：");   
	scanf("%d",&a[0]);
	while(a[0]<=0)  //题目数必须为正数
	{
		printf("请重新输入有效的题目数：");
		scanf("%d",&a[0]);
	};
	//可定制运算数的范围
	printf("请输入运算数的范围：");
	scanf("%d",&a[2]);
	while(a[2]<=0)  //运算数必须为正数
	{
		printf("请重新输入有效的范围：");
		scanf("%d",&a[2]);
	};
	//可定制题目中是否有乘除法
	printf("请选择否有乘除法（是->1；否->0）：");
	scanf("%d",&a[1]);
	while((a[1]!=1)&(a[1]!=0)) //只能选择1或0
	{
		printf("请重新输入有效的数值：");
		scanf("%d",&a[1]);
	};
	//可定制题目结果是否有负数
	printf("请选择结果有无负数（是->1；否->0）：");
	scanf("%d",&a[3]);
	while((a[3]!=1)&(a[3]!=0))  //只能选择1或0
	{
		printf("请重新输入有效的数值：");
		scanf("%d",&a[3]);
	};
	//可定制结果是否有余数
	printf("请选择结果有无余数（是->1；否->0）：");
	scanf("%d",&a[4]);
	while((a[4]!=1)&(a[4]!=0))  //只能选择1或0
	{
		printf("请重新输入有效的数值：");
		scanf("%d",&a[4]);
	};
	
	//可定制是否支持小数
	printf("请选择是否支持小数（是->1；否->0）：");
	scanf("%d",&a[5]);
	while((a[5]!=1)&(a[5]!=0))  //只能选择1或0
	{
		printf("请重新输入有效的数值：");
		scanf("%d",&a[5]);
	};
	
	//可定制是否加括号
	printf("请选择是否加括号（是->1；否->0）：");
	scanf("%d",&a[6]);
	while((a[6]!=1)&(a[6]!=0))  //只能选择1或0
	{
		printf("请重新输入有效的数值：");
		scanf("%d",&a[6]);
	};

	//循环打印符合要求的题目
	for(i=0;i<a[0];i++)
	{
		switch(a[1]) 
		{
		case 1:j=rand()%4;break;  //有乘除法
	    case 0:j=rand()%2;break;  //无乘除法
	    }
	    x1=rand()%a[2]+1;
    	x2=rand()%a[2]+1;
		
		//循环打印
	    if(j==0)
		{
			
			switch(a[6])
			{
			case 0:
				switch(a[5])
				{
				case 0:printf("%d+%d=\t\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("%d.%d+%d.%d=\t\t",x1,x3,x2,x4);break;
				}
				break;
				
			case 1:
				switch(a[5])
				{
				case 0:printf("（%d+%d）=\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("（%d.%d+%d.%d）=\t",x1,x3,x2,x4);break;
				}
				break;
			}
			
		}
		if(j==1)
		{
			
			switch(a[3])
    	    {
			case 1:                   //结果可有负数
        		break;
        	case 0:                   //结果无负数
        		if(x1<x2)            //被减数比减数小则交换
        	    {
        		    flag=x1;
	            	x1=x2;
        	    	x2=flag;
        		}
        		break;
	    	}
			switch(a[6])
			{
			case 0:
				switch(a[5])
				{
				case 0:printf("%d-%d=\t\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("%d.%d-%d.%d=\t\t",x1,x3,x2,x4);break;
				}
				break;
				
			case 1:
				switch(a[5])
				{
				case 0:printf("（%d-%d）=\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("（%d.%d-%d.%d）=\t",x1,x3,x2,x4);break;
				}
				break;
			}
			
		}
	    if(j==2)
		{
			
			switch(a[6])
			{
			case 0:
				switch(a[5])
				{
				case 0:printf("%d*%d=\t\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("%d.%d*%d.%d=\t\t",x1,x3,x2,x4);break;
				}
				break;
				
			case 1:
				switch(a[5])
				{
				case 0:printf("（%d*%d）=\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("（%d.%d*%d.%d）=\t",x1,x3,x2,x4);break;
				}
				break;
			}
			
		}
		if(j==3)
		{
			
		switch(a[4])
		{
		case 1:                         //结果可有余数
    		break;
		case 0:                        //结果无余数
    		while(x1%x2!=0)            //如果不能整除，则重新生成
    	    {
    		    x1=rand()%a[2]+1;   
				x2=rand()%a[2]+1; 
    		};
    		break;
		}
			switch(a[6])
			{
			case 0:
				switch(a[5])
				{
				case 0:printf("%d/%d=\t\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("%d.%d/%d.%d=\t\t",x1,x3,x2,x4);break;
				}
				break;
				
			case 1:
				switch(a[5])
				{
				case 0:printf("（%d/%d）=\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("（%d.%d/%d.%d）=\t",x1,x3,x2,x4);break;
				}
				break;
			}
			
		}
	}

	printf("------------------------------出题完毕，欢迎再次使用！--------------------------\n");

	return 0;
}

