#include <stdio.h>

struct contacts_management
{
    int id;
    char name[50];
    long long int phone_no;
    char address[50];
} c[100];

void first();
void add_new_contact();
void list_of_all_contacts();
void search_contact();
void edit_contact();
void exit1();

int count = 0;
int main()
{

    printf("\n***************************************************************************************************************************************************");
    printf("\n***************************************************************************************************************************************************");
    printf("\n********************************************************** WELCOME TO CONTACT MANAGEMENT SYSTEM ***************************************************");
    printf("\n***************************************************************************************************************************************************");
    printf("\n***************************************************************************************************************************************************");

    first();
    return 0;
}
void first()
{
    int ch;

    printf("\n 1) Add new contact");
    
	printf("\n 2) List of all contact");
    
	printf("\n 3) Search contact");
    
	printf("\n 4) Edit contact");
    
	printf("\n 0) Exit");

    printf("\nenter your choice:");
    scanf("\n%d", &ch);

    if (ch == 1)
        add_new_contact();

    else if (ch == 2)
        list_of_all_contacts();

    else if (ch == 3)
        search_contact();

    else if (ch == 4)
        edit_contact();

    else if (ch == 0)
        exit1();

    else
        printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Something wrong >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
    
	printf("\n...............................................................Thank you for visit our system ......................................................");
}

void add_new_contact()
{
    int i;
    int a, n;
    printf("\nhow many contacts do you want add: ");
    scanf("%d", &n);
    for (i = count; i < n; i++)
    {
        printf("\nenter contact id:");
        scanf("%d", &c[i].id);
        
		printf("enter contact name: ");
        scanf("\n%s", c[i].name);
        
		lable:
        printf("enter contact phone_no: ");
        scanf("\n%lld", &c[i].phone_no);
        
		if(c[i].phone_no <1000000000  || c[i].phone_no >9999999999)
        {
        	printf("\ninvalid number\n");
        	goto lable;
		}
        
		printf("enter address:  ");
        scanf("\n%s", c[i].address);
        count++;
    }

    printf("\n____________________________________________________________________contact add successfully_________________________________________________________");

    printf("\nenter 7 to goto main menu:");
    scanf("%d", &a);

    if (a == 7)
        first();
        
}

void list_of_all_contacts()
{
    int i, b;
    struct contacts_management *cptr;

    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~List of all contacts ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    printf("\n________________________________________________________________________________________________________________________________________________________________");
    printf("\nCONTACT ID\t\tNAME\t\t\tPHONE_NO\t\tADDRESS");
    printf("\n________________________________________________________________________________________________________________________________________________________________");

    for (i = 0; i < count; i++)
    {
        cptr = &c[i];

        printf("\n%d\t\t%s\t\t\t%lld\t\t%s", cptr->id, cptr->name, cptr->phone_no, cptr->address);
        printf("\n___________________________________________________________________________________________________________________________________________________________");
    }
    
    printf("\nenter 7 to goto to main menu:");
    scanf("%d", &b);

    if (b == 7)
        first();

}

void search_contact()
{
    int i, num,m;

    printf("\nenter the contact id:");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        if (num == c[i].id)
        {
            printf("\n_____________________________________________________________________________________________________________________________________________________________");
        printf("\nCONTACT ID\t\tNAME\t\t\tPHONE_NO\t\tADDRESS");
        printf("\n_____________________________________________________________________________________________________________________________________________________________");

            printf("\n%d\t\t%s\t\t\t%lld\t\t%s", c[i].id, c[i].name, c[i].phone_no, c[i].address);
        printf("\n_____________________________________________________________________________________________________________________________________________________________");
        }
		
	}
	
    printf("\nenter 7 to goto main menu:");
    scanf("%d", &m);

    if (m == 7)
        first();
    
    
}

void edit_contact()
{

    int i, num, n, d;
    printf("\nenter the contact id:");
    scanf("%d", &n);

    printf("\nenter 1 to change name");
    
	printf("\nenter 2 to change phone no");
    
	printf("\nenter 3 to change address");
    
	printf("\nenter 4 to change contact");

    printf("\nenter your choice:");
    scanf("%d", &d);

    for (i = 0; i < count; i++)
    {
        if (n == c[i].id)
        {
            if (d == 1)
            {
                printf("\nenter contact name:");
                scanf("%s", c[i].name);
            }
            else if (d == 2)
            {
                aditya:
                printf("enter contact phone_no: ");
                scanf("\n%lld", &c[i].phone_no);
        
		        if(c[i].phone_no <1000000000  || c[i].phone_no >9999999999)
                {
                printf("\ninvalid number\n");
        	    goto aditya;
	        	}
            }
            else if (d == 3)
            {
                printf("\nenter address:");
                scanf("%s", c[i].address);
            }
            else if (d == 4)
            {
                printf("enter contact name: ");
                scanf("\n%s", c[i].name);
                
				sharp:
                printf("enter contact phone_no: ");
                scanf("\n%lld", &c[i].phone_no);
        
		        if(c[i].phone_no <1000000000  || c[i].phone_no >9999999999)
                {
            	printf("\ninvalid number\n");
                goto sharp;
		        }
                
				printf("enter address: ");
                scanf("\n%s", c[i].address);
            }
        }
    }

    printf("\nenter 7 to goto main menu:");
    scanf("%d", &num);
    
	if(num==7)
	first();
	

}

void exit1()
{

    printf("\n=================================================================================================================================================================");
    printf("\n____________________________________________________________________________Thank you____________________________________________________________________________");
    printf("\n=================================================================================================================================================================");

    printf("\n____________________________________________________________________process finished_____________________________________________________________________________");
}