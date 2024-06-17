#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 10

int occupied_rooms[MAX_ROOMS] = {0};
char guest_names[MAX_ROOMS][50];

void display_menu() {
    printf("\n");
    printf("Hotel Management System:\n");
    printf("1. View all rooms\n");
    printf("2. Book a room\n");
    printf("3. Check out\n");
    printf("4. Exit\n");
}

void view_rooms()
 {
	int i;
    printf("Room\tGuest Name\tOccupied\n");
    for (i = 0; i < MAX_ROOMS; i++)
	 {
        printf("%d\t%s\t\t", i+1, guest_names[i]);
        if (occupied_rooms[i]) 
		{
            printf("Yes\n");
        } 
		else 
		{
            printf("No\n");
        }
    }
}

void book_room() {
    int room_number;
    char guest_name[50];

    printf("Enter room number: ");
    scanf("%d", &room_number);

    if (room_number < 1 || room_number > MAX_ROOMS) {
        printf("Invalid room number. Please try again.\n");
        return;
    }

    if (occupied_rooms[room_number-1]) {
        printf("Room %d is already occupied. Please try again.\n", room_number);
        return;
    }

    printf("Enter guest name: ");
    scanf("%s", guest_name);

    strcpy(guest_names[room_number-1], guest_name);
    occupied_rooms[room_number-1] = 1;

    printf("Guest %s has booked room %d.\n", guest_name, room_number);
}

void check_out() {
    int room_number;

    printf("Enter room number: ");
    scanf("%d", &room_number);

    if (room_number < 1 || room_number > MAX_ROOMS)
	 {
        printf("Invalid room number. Please try again.\n");
        return;
    }

    if (!occupied_rooms[room_number-1]) 
	{
        printf("Room %d is already unoccupied. Please try again.\n", room_number);
        return;
    }

    printf("Guest %s has checked out of room %d.\n", guest_names[room_number-1], room_number);
    strcpy(guest_names[room_number-1], "");
    occupied_rooms[room_number-1] = 0;
}

int main() {
    int choice;

    while (1) {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                view_rooms();
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