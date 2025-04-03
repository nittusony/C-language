#include<stdio.h>
 main()
 {
 	int i,n,count=0,fact=1;
 	printf("enter n");
 	scanf("%d",&n);
 	printf("select 1 for even or odd\n");
 	printf("select 2 for fractorial\n");
 	printf("select 3 for prime or not\n");
 	printf("select 4 for positive or negative\n");
 	printf("enter choice");
 	 	scanf("%d",&n);
 	 	switch(n)
 	 	{
 	 		case 1:
 	 			if(n%2==0)
 	 			printf("even");
 	 			else
 	 			printf("odd");
 	 			break;
 	 			case 2:
 	 				for(i=1;i<=n;i++)
 	 				fact=fact*i;
 	 			printf("%d",fact);
 	 			break;
 	 			case 3:
 	 				for(i=1;i<=n;i++)
 	 				{
 	 					if(n%i==0)
 	 					count++;
					  }
 	 				if(count==2)
 	 					printf("prime");
 	 					else
 	 					printf("not prime");
 	 			break;
 	 			case 4:
 	 			if(i>0) 
 	 			printf("positive");
 	 			else
 	 			printf("negative");
				  break;
 	 			default:
 	 				printf("wrong choice");
 	 			
		  }
	}
 	 	

 
