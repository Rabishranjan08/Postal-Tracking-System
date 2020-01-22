#include<stdio.h>
#include<string.h>
struct postal
{
	int postaid;
	char sendername[20],receivername[20];
	int age;
	char senderaddress[100],receiveraddress[100];
	int distance,cost;
};
int main()
{
int n;
printf("ENTER THE CHOICE BY WHICH YOU WANT TO SEARCH YOUR POST STATUS.....\n\n\n");
printf("1 For search by PostalID:-\n");
printf("2 For search by sendersname:-\n");
printf("3 For search by senderaddress:-\n");
printf("4 For search by age:-\n");
scanf("%d",&n);
switch(n)
{
	case 1:
		{
			int id;
			printf("Enter the postal id of user out of 1,2,3,4,5:-\n");
			scanf("%d",&id);
			if(id==1)
			{
				struct postal p={1,"Rakesh","Shubham",18,"Delhi","Jalandhar",200,250};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t        ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\nDespached");
			    printf("\n\nExpected delivery\n2 Days");
			}
			   else if(id==2)
			    {
			    	struct postal p={2,"Aakash","Sandeep",20,"Nagpur","Ludhiyana",800,300};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t     ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t  ",p.cost);
			    printf("\n\ncurrent status\nshipped");
			    printf("\n\nexpected delivery\n3 days");
				}
				 else if(id==3)
				{
					struct postal p={3,"Sagar","Anmol",22,"Chandigarh","Patna",700,200};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t        ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t        ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\nDespached");
			    printf("\n\nExpected Delivery\n5 days");
				}
				else if(id==4)
				{
					struct postal p={4,"Ritesh","Raman",23,"Amritsar","Kolkata",1000,350};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t        ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t      ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\nnot Despached");
			    printf("\n\nExpected Delivery\n4 days");
				}
				else if(id==5)
				{
					struct postal p={5,"Parakh","Satyam",24,"Mumbai","Jammu",1200,400};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t        ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\nnot shipped");
			    printf("\n\nExpected Delivery\n2 days");
				}
				else
				printf("please,Enter valid postal id");
		     	break;
		         }
		    	case 2:
		        {
			char sendername[20];
			printf("Enter the sendername whose post details you want(Rakesh,Aakash,Sagar,Ritesh,Parakh:-)\n");
			scanf("%s",sendername);
			int i;
			i=stricmp("Rakesh",sendername);
			if(i==0)
			{
				struct postal p={1,"Rakesh","Shubham",18,"Delhi","Jalandhar",200,250};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t        ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\ndespached");
			    printf("\n\nExpected delivery\n4 Days");
			}
			i=stricmp("Aakash",sendername);
			if(i==0)
			{
				struct postal p={2,"Aakash","Sandeep",20,"Nagpur","Ludhiyana",800,300};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t   ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\nshipped");
			    printf("\n\nExpected Delivery\n5 Days");
			}
			i=stricmp("Sagar",sendername);
			if(i==0)
			{
				struct postal p={3,"Sagar","Anmol",22,"Chandigarh","Patna",700,200};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t         ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t       ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			}
				i=stricmp("Ritesh",sendername);
			if(i==0)
			{
				struct postal p={4,"Ritesh","Raman",23,"Amritsar","Kolkata",1000,350};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t         ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t      ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			}
				i=stricmp("Parakh",sendername);
			if(i==0)
			{
				struct postal p={5,"Parakh","Satyam",24,"Mumbai","Jammu",1200,400};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t      ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			}
			
		
			break;
	        }char sendername[20];
	        if(sendername!="Rakesh"||"Aakash"||"Sagar"||"Ritesh"||"Parakh")
	        {
	        	printf("please enter valid sender name");
			}
	       case 3:
		{       
		char senderaddress[100];
		printf("Enter the sender address whose post details you want to print\n");
		int i;
		scanf("%s",senderaddress);
				i=stricmp("Delhi",senderaddress);
			if(i==0)
			{
				struct postal p={1,"Rakesh","Shubham",18,"Delhi","Jalandhar",200,250};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t        ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\nCurrent Status\nDespached");
			    printf("\n\nExpected Delivery\n 3 Days");
			}
				i=stricmp("Nagpur",senderaddress);
			if(i==0)
			{
				struct postal p={2,"Aakash","Sandeep",20,"Nagpur","Ludhiyana",800,300};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t   ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\nnot shipped");
			    printf("\n\nExpected Delivery\n6 Days");
			}
				i=strcmp("Chandigarh",senderaddress);
			if(i==0)
			{
				struct postal p={3,"Sagar","Anmol",22,"Chandigarh","Patna",700,200};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t         ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t       ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\n shipped");
			    printf("\n\nExpected Delivery\n7 Days");
			}
			i=strcmp("Amritsar",senderaddress);
			if(i==0)
			{
				struct postal p={4,"Ritesh","Raman",23,"Amritsar","Kolkata",1000,350};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t         ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t      ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\ndespached");
			    printf("\n\nExpected Delivery\n3 Days");
			}
			i=strcmp("Mumbai",senderaddress);
			if(i==0)
			{
				struct postal p={5,"Parakh","Satyam",24,"Mumbai","Jammu",1200,400};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t      ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\n shipped");
			    printf("\n\nExpected Delivery\n2 Days");
			  }
			break;
		     }
		     case 4:
		     	{
		     		int age;
		     		printf("Enter the age of the person(18,20,22,23,24):-\n");
		     		scanf("%d",&age);
		     		if(age==18)
		     		{
		     		struct postal p={1,"Rakesh","Shubham",18,"Delhi","Jalandhar",200,250};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t        ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\nCurrent Status\nDespached");
			    printf("\n\nExpected Delivery\n 3 Days");	
					 }
					 if(age==20)
					 {
					 	struct postal p={2,"Aakash","Sandeep",20,"Nagpur","Ludhiyana",800,300};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t   ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\nshipped");
			    printf("\n\nExpected Delivery\n5 Days");	
					 }
					 if(age==22)
					 {
					 		struct postal p={3,"Sagar","Anmol",22,"Chandigarh","Patna",700,200};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t         ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t       ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\n shipped");
			    printf("\n\nExpected Delivery\n7 Days");
					 }
					 if(age==23)
					 {
					 	struct postal p={4,"Ritesh","Raman",23,"Amritsar","Kolkata",1000,350};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t         ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t      ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\ndespached");
			    printf("\n\nExpected Delivery\n3 Days");	
					 }
					 if(age==24)
					 {
					 	struct postal p={5,"Parakh","Satyam",24,"Mumbai","Jammu",1200,400};
				printf("postaid \t sendername \t receivername \t age \t senderaddress\treceiveraddress\tdistance\tcost\n");
				printf("%d              \t",p.postaid);
				printf("%s \t         ",p.sendername);
				printf("%s \t  ",p.receivername);
			    printf("%d \t ",p.age);
			    printf("%s \t      ",p.senderaddress);
			    printf("%s \t  ",p.receiveraddress);   
			    printf("%d \t   ",p.distance);
			    printf("%d \t   ",p.cost);
			    printf("\n\ncurrent status\n shipped");
			    printf("\n\nExpected Delivery\n2 Days");	
					 }
					 break;
				 }
	
	     default:
		printf("\nInvalid input");
	}
	return 0;
}



