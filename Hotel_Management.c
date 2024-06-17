#include<stdio.h>
#include<string.h>
#define MAX_ROOM 10

int occ_rooms[MAX_ROOM]={0};
char guest_names[MAX_ROOM][50];

 void display_menu()
 {
 	printf("\n");
 	printf("Hotel Management System\n");
 	printf("1. View all rooms\n");
 	printf("2. Book a room\n");
 	printf("3.Check out\n");
 	printf("4.Exit\n");
 }
 
 void view_room()
 {
 	int i;
 	printf("Room\tGuest name\tOccupied\n");
 	for(i=0;i<MAX_ROOM;i++) 
	{
		printf("%d\t%s\t\t",i+1,guest_names[i]);
		if(occ_rooms[i])
	    {
	    	printf("Yes\n");
		}
		else
		{
			printf("No\n");
		}
	}
 }
 void book_room()
 {
 	int room_no;
 	char guest_name[50];
 	
	printf("Enter the room number");
	scanf("%d",&room_no);
	
	if(room_no<1||room_no>MAX_ROOM) 
	{
		printf("Invalid room number.Please try again.\n");
		return;
	}
	if(occ_rooms[room_no-1])
	{
		printf("Room %d is already occupied .Please try again.\n");
		return;
	}
	printf("Enter guest name");
	scanf("%s",guest_name);
	
	strcpy(guest_names[room_no-1], guest_name);
	occ_rooms[room_no-1] = 1;
	
	printf("Guest %s has booked room %d\n",guest_name,room_no);
 }
 void check_out()
 {
 	int room_no;
 	printf("Enter the room number");
	scanf("%d",&room_no);
	
	if(room_no<1||room_no>MAX_ROOM) 
	{
		printf("Invalid room number.Please try again.\n");
		return;
	}
	if(!occ_rooms[room_no-1])
	{
		printf("Room %d is already unoccupied.Please try again",room_no);
		return;
	}
	printf("Guest %s has checked out of room %d.\n",guest_names[room_no-1], room_no);
	 
	strcpy(guest_names[room_no-1],"");
    occ_rooms[room_no-1] = 0;
 }
int main()
{
  int choice;

    while (1)
	{
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
	   {
            case 1:
                view_room();
                break;
            case 2:
                book_room();
                break;
            case 3:
                check_out();
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}