// t1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stdlib.h"
#include <time.h>

int _tmain( )
{
	srand(time(NULL)); //������Ŀ�ظ�
	int x1,x2,flag,i,j,k;
	int x3,x4;
	int a[10];
	printf("---------------------------��ӭʹ�ñ�ϵͳ��ӡ��Ŀ��----------------------------\n");
	//�ɶ��ƴ�ӡ����Ŀ��
	printf("������Ҫ��ӡ����Ŀ����");   
	scanf("%d",&a[0]);
	while(a[0]<=0)  //��Ŀ������Ϊ����
	{
		printf("������������Ч����Ŀ����");
		scanf("%d",&a[0]);
	};
	//�ɶ����������ķ�Χ
	printf("�������������ķ�Χ��");
	scanf("%d",&a[2]);
	while(a[2]<=0)  //����������Ϊ����
	{
		printf("������������Ч�ķ�Χ��");
		scanf("%d",&a[2]);
	};
	//�ɶ�����Ŀ���Ƿ��г˳���
	printf("��ѡ����г˳�������->1����->0����");
	scanf("%d",&a[1]);
	while((a[1]!=1)&(a[1]!=0)) //ֻ��ѡ��1��0
	{
		printf("������������Ч����ֵ��");
		scanf("%d",&a[1]);
	};
	//�ɶ�����Ŀ����Ƿ��и���
	printf("��ѡ�������޸�������->1����->0����");
	scanf("%d",&a[3]);
	while((a[3]!=1)&(a[3]!=0))  //ֻ��ѡ��1��0
	{
		printf("������������Ч����ֵ��");
		scanf("%d",&a[3]);
	};
	//�ɶ��ƽ���Ƿ�������
	printf("��ѡ����������������->1����->0����");
	scanf("%d",&a[4]);
	while((a[4]!=1)&(a[4]!=0))  //ֻ��ѡ��1��0
	{
		printf("������������Ч����ֵ��");
		scanf("%d",&a[4]);
	};
	
	//�ɶ����Ƿ�֧��С��
	printf("��ѡ���Ƿ�֧��С������->1����->0����");
	scanf("%d",&a[5]);
	while((a[5]!=1)&(a[5]!=0))  //ֻ��ѡ��1��0
	{
		printf("������������Ч����ֵ��");
		scanf("%d",&a[5]);
	};
	
	//�ɶ����Ƿ������
	printf("��ѡ���Ƿ�����ţ���->1����->0����");
	scanf("%d",&a[6]);
	while((a[6]!=1)&(a[6]!=0))  //ֻ��ѡ��1��0
	{
		printf("������������Ч����ֵ��");
		scanf("%d",&a[6]);
	};

	//ѭ����ӡ����Ҫ�����Ŀ
	for(i=0;i<a[0];i++)
	{
		switch(a[1]) 
		{
		case 1:j=rand()%4;break;  //�г˳���
	    case 0:j=rand()%2;break;  //�޳˳���
	    }
	    x1=rand()%a[2]+1;
    	x2=rand()%a[2]+1;
		
		//ѭ����ӡ
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
				case 0:printf("��%d+%d��=\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("��%d.%d+%d.%d��=\t",x1,x3,x2,x4);break;
				}
				break;
			}
			
		}
		if(j==1)
		{
			
			switch(a[3])
    	    {
			case 1:                   //������и���
        		break;
        	case 0:                   //����޸���
        		if(x1<x2)            //�������ȼ���С�򽻻�
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
				case 0:printf("��%d-%d��=\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("��%d.%d-%d.%d��=\t",x1,x3,x2,x4);break;
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
				case 0:printf("��%d*%d��=\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("��%d.%d*%d.%d��=\t",x1,x3,x2,x4);break;
				}
				break;
			}
			
		}
		if(j==3)
		{
			
		switch(a[4])
		{
		case 1:                         //�����������
    		break;
		case 0:                        //���������
    		while(x1%x2!=0)            //�����������������������
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
				case 0:printf("��%d/%d��=\t",x1,x2);break;
				case 1:
					x3=rand()%9+1;
					x4=rand()%9+1;
					printf("��%d.%d/%d.%d��=\t",x1,x3,x2,x4);break;
				}
				break;
			}
			
		}
	}

	printf("------------------------------������ϣ���ӭ�ٴ�ʹ�ã�--------------------------\n");

	return 0;
}

