#include <stdio.h>

// NIST BUS SERVICES
void commom_bus_opt()
{
    printf("Bus Schedule\n");
}

// Admin Bus Service Panel
void ad_bus_serv()
{
    printf("Welcome to Admin Bus Service Panel\n");
}

// Admin Library Service
void ad_lib_serv()
{
    printf("Welcome NIST ADMIN to Library Service Controls\n");
}

// Admin Student Control System
void std_cntrl()
{
    printf("Student Control System Accessed\n");
}

// Student Login System
void std_login()
{
    printf("Welcome to NIST Student Services Page\n");
    printf("Authenticate yourself to login and access services\n");
    
}

// Guest Support
void admn_rltd_serv()
{
    printf(" - - - - - - - - - - - - - - WELCOME TO NIST - - - - - - - - - - - - - - - - - - - - -\n\n");
    printf("1. Admission\n");
}

// Student Panel
void student_panel()
{
    int std_panel_ch;
    printf("\n - - - - - - - - - - - - - - - Welcome to Student Panel - - - - - - - - - - - - - - -\n\n");
    printf("1. Bus Services\n");
    printf("2. Login to access personal services\n\n");
    printf("Enter your choice: ");
    scanf("%d", &std_panel_ch);

    if (std_panel_ch == 1)
    {
        commom_bus_opt();
    }
    else if (std_panel_ch == 2)
    {
        std_login();
    }
    else
    {
        printf("Invalid choice. Returning to main menu.\n");
    }
}

// Admin Panel
void admin_panel()
{
    while (1)
    {
        int ad_ch;
        printf("\n - - - - - - - - - - - - - - - Welcome to Admin Panel - - - - - - - - - - - - - - - -\n\n");
        printf("1. Bus Service\n");
        printf("2. Library Services\n");
        printf("3. Student Controls\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ad_ch);

        if (ad_ch == 1)
        {
            ad_bus_serv();
        }
        else if (ad_ch == 2)
        {
            ad_lib_serv();
        }
        else if (ad_ch == 3)
        {
            std_cntrl();
        }
        else
        {
            printf("Choose correct option\n");
        }
    }
}

// Admin Authentication
void admin_auth()
{
    int user, pass;
    for (int i = 1; i <= 2; i++)
    {
        printf("\n\n - - - - - - - - - - - - - Verify yourself to access Admin Panel - - - - - - - - - - - - - - - -\n\n");
        printf("Enter your 6-digit Username: ");
        scanf("%d", &user);
        printf("Enter your Password: ");
        scanf("%d", &pass);

        if (user == 933796 && pass == 933796)
        {
            printf("\nAccess granted to NIST Admin Panel\n");
            admin_panel();
            return;
        }
        else
        {
            printf("Invalid credentials. Try again.\n");
        }
    }
    printf("Access denied. Returning to main menu.\n");
}

// Guest Panel
void guest_opt()
{
    int guest_ch;
    printf(" * * * * * * * * * * * * * * WELCOME TO NIST UNIVERSITY * * * * * * * * * * * * * * * * * * *\n\n");
    printf("1. Room number by services\n");
    printf("2. Bus Schedule\n");
    printf("3. Admission related issues\n\n");
    printf("Enter your choice: ");
    scanf("%d", &guest_ch);

    if (guest_ch == 1)
    {
        printf("Important service-related rooms\n");
    }
    else if (guest_ch == 2)
    {
        commom_bus_opt();
    }
    else if (guest_ch == 3)
    {
        admn_rltd_serv();
    }
    else
    {
        printf("Invalid choice.\n");
    }
}

// Main Menu
int main()
{
    int ch;
    while (1)
    {
        printf("\n - - - - - - - - - - - - - Welcome to NIST UNIVERSITY Services - - - - - - - - - - - - -\n\n");
        printf("1. Admin Panel\n");
        printf("2. Student Panel\n");
        printf("3. Guests\n\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        if (ch == 1)
        {
            admin_auth();
        }
        else if (ch == 2)
        {
            student_panel();
        }
        else if (ch == 3)
        {
            guest_opt();
        }
        else
        {
            printf("\nChoose a correct option.\n");
        }
    }
    return 0;
}
