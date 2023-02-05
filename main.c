#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> 
#include<string.h>

void PartsInventoryCreation();
void PartsInventoryUpdate();
void PartsInventoryTracking();
void PartsInventorySearch();
struct warehouseparts
{
    char parts_name[5][20];
    int parts_id[5];
    int parts_quantity[5];
}; struct warehouseparts warehouse1[5]; struct warehouseparts warehouse2[5]; struct warehouseparts warehouse3[5]; struct warehouseparts readfromfile[5];

int main()
{
    int choice;

    while (1)
    {
        printf("\n\n************** AUTOMOBILE PARTS INVENTORY MANAGEMENT SYSTEM **************\n\n\n");
        printf("\n1. Parts Inventory Creation in Warehouses \n");
        printf("2. Parts Inventory Update\n");
        printf("3. Parts Inventory Tracking\n");
        printf("4. Searching Functionalities\n");
        printf("5. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("\n\n************** CREATION OF PARTS INVENTORY IN WAREHOUSES **************\n\n\n");
            PartsInventoryCreation();
            break;
        }
        case 2:
        {
            printf("\n\n************** UPDATE OF PARTS INVENTORY IN WAREHOUSES **************\n\n\n");
            PartsInventoryUpdate();
            break;
        }
        case 3:
        {
            printf("\n\n************** TRACKING OF PARTS INVENTORY IN WAREHOUSES **************\n\n\n");
            PartsInventoryTracking();
            break;
        }
        case 4:
        {
            printf("\n\n************** SEARCHING FUNCTIONALITIES **************\n\n\n");
            PartsInventorySearch();
            break;
        }
        case 5:
            printf("\n\n\t\t\tHave A Nice Day !\n\n\n");
            exit(0);    // terminates the complete program execution
        default:
            printf("\n*******Enter Correct Input*******\n");
        }
    }
    printf("\n\n\t\t\tHave A Nice Day !\n\n\n");
    return 0;
}

void PartsInventoryCreation()
{

    // ** This if user wants to enter them randomly

    for (int i = 0; i < 1; i++)// ** This is for the first warehouse
    {
        if (i == 0)
        {
            strcpy(warehouse1->parts_name[i], "EngineBlock"); // ** Copy the string to the array of struct
            strcpy(warehouse1->parts_name[i + 1], "ExhaustValve");
            strcpy(warehouse1->parts_name[i + 2], "RoofPanel");
            strcpy(warehouse1->parts_name[i + 3], "Bumper");
            strcpy(warehouse1->parts_name[i + 4], "ACCondenser");

            for (int i = 0; i < 5; i++)
            {
                warehouse1->parts_quantity[i] = 50; // ** Assign the quantity of the parts
            }
            for (int i = 0; i < 5; i++)
            {
                warehouse1->parts_id[i] = 101 + i; // ** Assign the id of the parts
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n\nParts Name : %s\n", warehouse1->parts_name[i]); // ** Display the parts name
        printf("Parts ID : %d\n", warehouse1->parts_id[i]); // ** Display the parts id
        printf("Parts Quantity : %d\n", warehouse1->parts_quantity[i]); // ** Display the parts quantity
    }

    FILE* fp;
    fp = fopen("wbz.txt", "w");
    if (fp == NULL)
    {
        printf("\nError in opening the file\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(fp, "%s %d %d\n", warehouse1->parts_name[i], warehouse1->parts_id[i], warehouse1->parts_quantity[i]);
    }
    fclose(fp);
    printf("\n\n\t\t\tParts Inventory Created Warehouse WBZ Successfully !\n\n\n");

    // ** This is for the second warehouse
    for (int i = 0; i < 1; i++)
    {
        if (i == 0)
        {
            strcpy(warehouse2->parts_name[i], "WaterPump"); // ** Copy the string to the array of struct
            strcpy(warehouse2->parts_name[i + 1], "OilFilter");
            strcpy(warehouse2->parts_name[i + 2], "Door");
            strcpy(warehouse2->parts_name[i + 3], "Hood");
            strcpy(warehouse2->parts_name[i + 4], "Compressor");

            for (int i = 0; i < 5; i++)
            {
                warehouse2->parts_quantity[i] = 50; // ** Assign the quantity of the parts
            }
            for (int i = 0; i < 5; i++)
            {
                warehouse2->parts_id[i] = 106 + i; // ** Assign the id of the parts
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n\nParts Name : %s\n", warehouse2->parts_name[i]); // ** Display the parts name
        printf("Parts ID : %d\n", warehouse2->parts_id[i]); // ** Display the parts id
        printf("Parts Quantity : %d\n", warehouse2->parts_quantity[i]); // ** Display the parts quantity
    }

    FILE* fp1;
    fp1 = fopen("wsl.txt", "w");
    if (fp1 == NULL)
    {
        printf("\nError in opening the file\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(fp1, "%s %d %d\n", warehouse2->parts_name[i], warehouse2->parts_id[i], warehouse2->parts_quantity[i]);
    }
    fclose(fp1);
    printf("\n\n\t\t\tParts Inventory Created for Warehouse WSL Successfully !\n\n\n");

    // ** This is for the third warehouse
    for (int i = 0; i < 1; i++)
    {
        if (i == 0)
        {
            strcpy(warehouse3->parts_name[i], "SteeringWheel"); // ** Copy the string to the array of struct
            strcpy(warehouse3->parts_name[i + 1], "Tire");
            strcpy(warehouse3->parts_name[i + 2], "Brake");
            strcpy(warehouse3->parts_name[i + 3], "BrakePad");
            strcpy(warehouse3->parts_name[i + 4], "BrakeDisc");

            for (int i = 0; i < 5; i++)
            {
                warehouse3->parts_quantity[i] = 50; // ** Assign the quantity of the parts
            }
            for (int i = 0; i < 5; i++)
            {
                warehouse3->parts_id[i] = 111 + i; // ** Assign the id of the parts
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n\nParts Name : %s\n", warehouse3->parts_name[i]); // ** Display the parts name
        printf("Parts ID : %d\n", warehouse3->parts_id[i]); // ** Display the parts id
        printf("Parts Quantity : %d\n", warehouse3->parts_quantity[i]); // ** Display the parts quantity
    }

    FILE* fp2;
    fp2 = fopen("war.txt", "w");
    if (fp2 == NULL)
    {
        printf("\nError in opening the file\n");
        exit(1);
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(fp2, "%s %d %d\n", warehouse3->parts_name[i], warehouse3->parts_id[i], warehouse3->parts_quantity[i]);
    }
    fclose(fp2);
    printf("\n\n\t\t\tParts Inventory Created Warehouse WAR Successfully !\n\n\n");

}

void PartsInventoryUpdate()
{
    int choice;
    printf("\n*******Select whether your a supplier or distributor*******\n\n");
    printf("1. Supplier\n");
    printf("2. Distributor\n");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:

        printf("\n\n\t\t\tYou are a Supplier\n\n");
        printf("\t\tYou can update the parts inventory\n\n");
        printf("1. WBZ Warehouse\n");
        printf("2. WSL Warehouse\n");
        printf("3. WAR Warehouse\n");
        printf("\nEnter your choice : ");
        int choice1;
        scanf("%d", &choice1);
        if (choice1 == 1)
        {
            FILE* f;
            f = fopen("wbz.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "wbz.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("wbz.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2))
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);

            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]);
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
            }
            fclose(f);

            printf("\n\n\tYou are supplying part to the WBZ Warehouse\n\n");
            printf("\t\t   You are WBZ Supplier\n\n");
            printf("\tYou can only supply parts of Warehouse 1\n\n");
            printf("Current Parts and thier Quantity in WBZ Warehouse:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\nParts Name : %s\n", readfromfile->parts_name[i]); // ** Display the parts name
                printf("Parts ID : %d\n", readfromfile->parts_id[i]); // ** Display the parts id
                printf("Parts Quantity : %d\n", readfromfile->parts_quantity[i]); // ** Display the parts quantity
            }

            printf("\nEnter part id you want to supply more : ");
            int choice2;
            scanf("%d", &choice2);

            if (choice2 == 101)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[0] = readfromfile->parts_quantity[0] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[0], readfromfile->parts_quantity[0]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WBZ_Supplier %d %d\n", readfromfile->parts_id[0], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");

            }
            else if (choice2 == 102)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[1] = readfromfile->parts_quantity[1] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[1], readfromfile->parts_quantity[1]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WBZ_Supplier %d %d\n", readfromfile->parts_id[1], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 103)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[2] = readfromfile->parts_quantity[2] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[2], readfromfile->parts_quantity[2]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WBZ_Supplier %d %d\n", readfromfile->parts_id[2], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 104)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[3] = readfromfile->parts_quantity[3] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[3], readfromfile->parts_quantity[3]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WBZ_Supplier %d %d\n", readfromfile->parts_id[3], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 105)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[4] = readfromfile->parts_quantity[4] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[4], readfromfile->parts_quantity[4]);

                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WBZ_Supplier %d %d\n", readfromfile->parts_id[4], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else
            {
                printf("\n\n\t\t\tInvalid Choice !\n\n\n");
            }
            FILE* fp1;
            fp1 = fopen("wbz.txt", "w");
            for (int i = 0; i < 5; i++)
            {
                fprintf(fp1, "%s %d %d\n", readfromfile->parts_name[i], readfromfile->parts_id[i], readfromfile->parts_quantity[i]);
            }
            fclose(fp1);
        }
        else if (choice1 == 2)
        {
            FILE* f;
            f = fopen("wsl.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "wsl.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("wsl.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2))
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);

            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]);
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
            }
            fclose(f);

            printf("\n\n\tYou are supplying part to the WSL Warehouse\n\n");
            printf("\t\t   You are WSL Supplier\n\n");
            printf("\tYou can only supply parts of Warehouse 2\n\n");
            printf("Current Parts and thier Quantity in WSL Warehouse:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\nParts Name : %s\n", readfromfile->parts_name[i]); // ** Display the parts name
                printf("Parts ID : %d\n", readfromfile->parts_id[i]); // ** Display the parts id
                printf("Parts Quantity : %d\n", readfromfile->parts_quantity[i]); // ** Display the parts quantity
            }

            printf("\nEnter part id you want to supply more : ");
            int choice2;
            scanf("%d", &choice2);
            if (choice2 == 106)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[0] = readfromfile->parts_quantity[0] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[0], readfromfile->parts_quantity[0]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WSL_Supplier %d %d\n", readfromfile->parts_id[0], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 107)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[1] = readfromfile->parts_quantity[1] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[1], readfromfile->parts_quantity[1]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WSL_Supplier %d %d\n", readfromfile->parts_id[1], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 108)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[2] = readfromfile->parts_quantity[2] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[2], readfromfile->parts_quantity[2]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WSL_Supplier %d %d\n", readfromfile->parts_id[2], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 109)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[3] = readfromfile->parts_quantity[3] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[3], readfromfile->parts_quantity[3]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WSL_Supplier %d %d\n", readfromfile->parts_id[3], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 110)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[4] = readfromfile->parts_quantity[4] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[4], readfromfile->parts_quantity[4]);

                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WSL_Supplier %d %d\n", readfromfile->parts_id[4], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else
            {
                printf("\n\n\t\t\tInvalid Part ID !\n\n\n");
            }
            FILE* fp1;
            fp1 = fopen("wsl.txt", "w");
            for (int i = 0; i < 5; i++)
            {
                fprintf(fp1, "%s %d %d\n", readfromfile->parts_name[i], readfromfile->parts_id[i], readfromfile->parts_quantity[i]);
            }
            fclose(fp1);
        }
        else if (choice1 == 3) //warehouse 3
        {
            FILE* f;
            f = fopen("war.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "war.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("war.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2))
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);

            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]);
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
            }
            fclose(f);

            printf("\n\n\tYou are supplying part to the WAR Warehouse\n\n");
            printf("\t\t   You are WAR Supplier\n\n");
            printf("\tYou can only supply parts of Warehouse 3\n\n");
            printf("Current Parts and thier Quantity in WAR Warehouse:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\nParts Name : %s\n", readfromfile->parts_name[i]); // ** Display the parts name
                printf("Parts ID : %d\n", readfromfile->parts_id[i]); // ** Display the parts id
                printf("Parts Quantity : %d\n", readfromfile->parts_quantity[i]); // ** Display the parts quantity
            }

            printf("\nEnter part id you want to supply more : ");
            int choice2;
            scanf("%d", &choice2);
            if (choice2 == 111)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[0] = readfromfile->parts_quantity[0] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[0], readfromfile->parts_quantity[0]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WAR_Supplier %d %d\n", readfromfile->parts_id[0], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 112)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[1] = readfromfile->parts_quantity[1] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[1], readfromfile->parts_quantity[1]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WAR_Supplier %d %d\n", readfromfile->parts_id[1], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 113)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[2] = readfromfile->parts_quantity[2] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[2], readfromfile->parts_quantity[2]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WAR_Supplier %d %d\n", readfromfile->parts_id[2], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 114)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[3] = readfromfile->parts_quantity[3] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[3], readfromfile->parts_quantity[3]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WAR_Supplier %d %d\n", readfromfile->parts_id[3], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else if (choice2 == 115)
            {
                printf("\t\tEnter the part quantity (+) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                readfromfile->parts_quantity[4] = readfromfile->parts_quantity[4] + part_quantity;
                printf("Updated Part quantity of %s is %d", readfromfile->parts_name[4], readfromfile->parts_quantity[4]);
                FILE* fp3;
                fp3 = fopen("suppliers.txt", "a+");
                fprintf(fp3, "WAR_Supplier %d %d\n", readfromfile->parts_id[4], part_quantity);
                fclose(fp3);
                printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
            }
            else
            {
                printf("\n\n\t\t\tInvalid Part ID !\n\n\n");
            }
            FILE* fp1;
            fp1 = fopen("war.txt", "w");
            for (int i = 0; i < 5; i++)
            {
                fprintf(fp1, "%s %d %d\n", readfromfile->parts_name[i], readfromfile->parts_id[i], readfromfile->parts_quantity[i]);
            }
            fclose(fp1);
        }
        break;
    case 2:
        printf("\n\n\t\t\tYou are a Distributor\n\n");
        printf("\t\tYou can provide parts to the assembly sections\n\n");
        printf("1. WBZ Warehouse\n");
        printf("2. WSL Warehouse\n");
        printf("3. WAR Warehouse\n");
        printf("\nEnter your choice : ");
        int choices1;
        scanf("%d", &choices1);
        if (choices1 == 1)
        {
            FILE* f;
            f = fopen("wbz.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "wbz.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("wbz.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2)) // Reading data
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);

            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]);// Saving data to variables
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
            }
            fclose(f);

            printf("\n\n\tYou are distributing parts from the WBZ Warehouse\n\n");
            printf("\t\t   You are WBZ Distributor\n\n");
            printf("\tYou can only Distribute parts from Warehouse 1\n\n");
            printf("Current Parts and thier Quantity in WBZ Warehouse:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\nParts Name : %s\n", readfromfile->parts_name[i]); // ** Display the parts name
                printf("Parts ID : %d\n", readfromfile->parts_id[i]); // ** Display the parts id
                printf("Parts Quantity : %d\n", readfromfile->parts_quantity[i]); // ** Display the parts quantity
            }

            printf("\nEnter part id you want to distribute to assembly sections : ");
            int choice2;
            scanf("%d", &choice2);

            if (choice2 == 101)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[0] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[0], readfromfile->parts_name[0]);
                }
                else
                {
                    readfromfile->parts_quantity[0] = readfromfile->parts_quantity[0] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[0], readfromfile->parts_quantity[0]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WBZ_Distributor %d %d\n", readfromfile->parts_id[0], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 102)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[1] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[1], readfromfile->parts_name[1]);
                }
                else
                {
                    readfromfile->parts_quantity[1] = readfromfile->parts_quantity[1] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[1], readfromfile->parts_quantity[1]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WBZ_Distributor %d %d\n", readfromfile->parts_id[1], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 103)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[2] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[2], readfromfile->parts_name[2]);
                }
                else
                {
                    readfromfile->parts_quantity[2] = readfromfile->parts_quantity[2] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[2], readfromfile->parts_quantity[2]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WBZ_Distributor %d %d\n", readfromfile->parts_id[2], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 104)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[3] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[3], readfromfile->parts_name[3]);
                }
                else
                {
                    readfromfile->parts_quantity[3] = readfromfile->parts_quantity[3] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[3], readfromfile->parts_quantity[3]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WBZ_Distributor %d %d\n", readfromfile->parts_id[3], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 105)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[4] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[4], readfromfile->parts_name[4]);
                }
                else
                {
                    readfromfile->parts_quantity[4] = readfromfile->parts_quantity[4] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[4], readfromfile->parts_quantity[4]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WBZ_Distributor %d %d\n", readfromfile->parts_id[4], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else
            {
                printf("\n\n\t\t\tInvalid Choice !\n\n\n");
            }
            FILE* fp1;
            fp1 = fopen("wbz.txt", "w");
            for (int i = 0; i < 5; i++)
            {
                fprintf(fp1, "%s %d %d\n", readfromfile->parts_name[i], readfromfile->parts_id[i], readfromfile->parts_quantity[i]);
            }
            fclose(fp1);
        }
        else if (choices1 == 2)
        {
            FILE* f;
            f = fopen("wsl.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "wsl.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("wsl.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2))
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);

            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]);
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
            }
            fclose(f);

            printf("\n\n\tYou are distributing parts from the WSL Warehouse\n\n");
            printf("\t\t   You are WSL Distributor\n\n");
            printf("\tYou can only Distribute parts from Warehouse 2\n\n");
            printf("Current Parts and thier Quantity in WSL Warehouse:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\nParts Name : %s\n", readfromfile->parts_name[i]); // ** Display the parts name
                printf("Parts ID : %d\n", readfromfile->parts_id[i]); // ** Display the parts id
                printf("Parts Quantity : %d\n", readfromfile->parts_quantity[i]); // ** Display the parts quantity
            }

            printf("\nEnter part id you want to distribute to assembly sections : ");
            int choice2;
            scanf("%d", &choice2);

            if (choice2 == 106)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[0] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[0], readfromfile->parts_name[0]);
                }
                else
                {
                    readfromfile->parts_quantity[0] = readfromfile->parts_quantity[0] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[0], readfromfile->parts_quantity[0]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WSL_Distributor %d %d\n", readfromfile->parts_id[0], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 107)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[1] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[1], readfromfile->parts_name[1]);
                }
                else
                {
                    readfromfile->parts_quantity[1] = readfromfile->parts_quantity[1] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[1], readfromfile->parts_quantity[1]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WSL_Distributor %d %d\n", readfromfile->parts_id[1], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 108)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[2] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[2], readfromfile->parts_name[2]);
                }
                else
                {
                    readfromfile->parts_quantity[2] = readfromfile->parts_quantity[2] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[2], readfromfile->parts_quantity[2]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WSL_Distributor %d %d\n", readfromfile->parts_id[2], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 109)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[3] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[3], readfromfile->parts_name[3]);
                }
                else
                {
                    readfromfile->parts_quantity[3] = readfromfile->parts_quantity[3] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[3], readfromfile->parts_quantity[3]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WSL_Distributor %d %d\n", readfromfile->parts_id[3], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 110)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[4] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[4], readfromfile->parts_name[4]);
                }
                else
                {
                    readfromfile->parts_quantity[4] = readfromfile->parts_quantity[4] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[4], readfromfile->parts_quantity[4]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WSL_Distributor %d %d\n", readfromfile->parts_id[4], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else
            {
                printf("\n\n\t\t\tInvalid Choice !\n\n\n");
            }
            FILE* fp1;
            fp1 = fopen("wsl.txt", "w");
            for (int i = 0; i < 5; i++)
            {
                fprintf(fp1, "%s %d %d\n", readfromfile->parts_name[i], readfromfile->parts_id[i], readfromfile->parts_quantity[i]);
            }
            fclose(fp1);
        }
        else if (choices1 == 3)
        {
            FILE* f;
            f = fopen("war.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "war.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("war.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2))
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);

            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]);
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
            }
            fclose(f);

            printf("\n\n\tYou are distributing parts from the WAR Warehouse\n\n");
            printf("\t\t   You are WAR Distributor\n\n");
            printf("\tYou can only Distribute parts from Warehouse 3\n\n");
            printf("Current Parts and thier Quantity in WAR Warehouse:\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\nParts Name : %s\n", readfromfile->parts_name[i]); // ** Display the parts name
                printf("Parts ID : %d\n", readfromfile->parts_id[i]); // ** Display the parts id
                printf("Parts Quantity : %d\n", readfromfile->parts_quantity[i]); // ** Display the parts quantity
            }

            printf("\nEnter part id you want to distribute to assembly sections : ");
            int choice2;
            scanf("%d", &choice2);

            if (choice2 == 111)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[0] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[0], readfromfile->parts_name[0]);
                }
                else
                {
                    readfromfile->parts_quantity[0] = readfromfile->parts_quantity[0] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[0], readfromfile->parts_quantity[0]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WAR_Distributor %d %d\n", readfromfile->parts_id[0], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 112)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[1] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[1], readfromfile->parts_name[1]);
                }
                else
                {
                    readfromfile->parts_quantity[1] = readfromfile->parts_quantity[1] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[1], readfromfile->parts_quantity[1]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WAR_Distributor %d %d\n", readfromfile->parts_id[1], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 113)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[2] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[2], readfromfile->parts_name[2]);
                }
                else
                {
                    readfromfile->parts_quantity[2] = readfromfile->parts_quantity[2] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[2], readfromfile->parts_quantity[2]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WAR_Distributor %d %d\n", readfromfile->parts_id[2], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 114)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[3] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[3], readfromfile->parts_name[3]);
                }
                else
                {
                    readfromfile->parts_quantity[3] = readfromfile->parts_quantity[3] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[3], readfromfile->parts_quantity[3]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WAR_Distributor %d %d\n", readfromfile->parts_id[3], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else if (choice2 == 115)
            {
                printf("\t\tEnter the part quantity (-) : ");
                int part_quantity;
                scanf("%d", &part_quantity);
                if (readfromfile->parts_quantity[4] - part_quantity <= 0)
                {
                    printf("\n\n\t\t\tYou can't distribute more or equal than %d parts of %s\n\n\n", readfromfile->parts_quantity[4], readfromfile->parts_name[4]);
                }
                else
                {
                    readfromfile->parts_quantity[4] = readfromfile->parts_quantity[4] - part_quantity;
                    printf("Updated Part quantity of %s is %d", readfromfile->parts_name[4], readfromfile->parts_quantity[4]);
                    FILE* fp3;
                    fp3 = fopen("distributors.txt", "a+");
                    fprintf(fp3, "WAR_Distributor %d %d\n", readfromfile->parts_id[4], part_quantity);
                    fclose(fp3);
                    printf("\n\n\t\t\tParts Inventory Updated Successfully !\n\n\n");
                }
            }
            else
            {
                printf("\n\n\t\t\tInvalid Choice !\n\n\n");
            }
            FILE* fp1;
            fp1 = fopen("war.txt", "w");
            for (int i = 0; i < 5; i++)
            {
                fprintf(fp1, "%s %d %d\n", readfromfile->parts_name[i], readfromfile->parts_id[i], readfromfile->parts_quantity[i]);
            }
            fclose(fp1);
        }
        break;
    default:
        printf("\n*******Enter Correct Input*******\n");
        break;
    }
}

void PartsInventoryTracking()
{
    int choice;
    printf("1. Total available quantity of all parts sorted in ascending order\n");
    printf("\nEnter your choice : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        int i, j, n = 5, m;
        int idxArray[5];
        float a, b;
        int total_quantity = 0;
        int total_quantity_array[5];
        printf("\n\n\t\t\tSelect which warehouse to sort\n\n");
        printf("1. WBZ Warehouse\n");
        printf("2. WSL Warehouse\n");
        printf("3. WAR Warehouse\n");
        printf("\nEnter your choice : ");
        int choice1;
        scanf("%d", &choice1);
        if (choice1 == 1)
        {

            FILE* f;
            f = fopen("wbz.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "wbz.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("wbz.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2)) //reading data
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);

            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]); // scan into the variables
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
                idxArray[i] = i; // piggyback initialization of the index array
            }
            fclose(f);

            for (int i = 0; i < 5; i++)
            {
                total_quantity_array[i] = readfromfile->parts_quantity[i];
                total_quantity = total_quantity + total_quantity_array[i];
            }
            printf("\n\n\t\tTotal available quantity of all parts is %d", total_quantity);
            printf("\n\n\t\t\tSorted in Original order\n\n\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[i], readfromfile->parts_name[i], total_quantity_array[i]);
            }

            //  sorting begins ... //
            for (i = 0; i < n; ++i) {
                for (j = i + 1; j < n; ++j) {
                    if (readfromfile->parts_quantity[idxArray[i]] > readfromfile->parts_quantity[idxArray[j]]) {
                        a = idxArray[i];
                        idxArray[i] = idxArray[j];
                        idxArray[j] = a;
                    }
                }
            }
            //  sorting ends ... //
            // Sorted Order
            printf("\n\n\t\t\tSorted in Ascending order\n\n\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[idxArray[i]], readfromfile->parts_name[idxArray[i]], readfromfile->parts_quantity[idxArray[i]]);
            }
            // Records of all parts that has stock quantity less than 10 units
            int less_than_10 = 0;
            for (int i = 0; i < 5; i++)
            {
                if (readfromfile->parts_quantity[i] < 10)
                {
                    less_than_10++;
                }
            }
            if (less_than_10 == 0)
            {
                printf("\n\n\t\t\tNo parts has stock quantity less than 10 units\n\n\n");
            }
            else if (less_than_10 <= 10)
            {
                printf("\n\n\t\tRecords of all parts that has stock quantity less than 10 units\n\n");
                for (int i = 0; i < 5; i++)
                {
                    if (readfromfile->parts_quantity[i] < 10)
                    {
                        printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[i], readfromfile->parts_name[i], total_quantity_array[i]);
                    }
                }
                break;
            }
            else
            {
                printf("\n\n\t\t\tSomething went wrong\n\n\n");
            }
        }
        else if (choice1 == 2)
        {
            FILE* f;
            f = fopen("wsl.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "wsl.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("wsl.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2))
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);


            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]);
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
                idxArray[i] = i; // piggyback initialization of the index array
            }
            fclose(f);
            for (int i = 0; i < 5; i++)
            {
                total_quantity_array[i] = readfromfile->parts_quantity[i];
                total_quantity = total_quantity + total_quantity_array[i];
            }
            printf("\n\n\t\tTotal available quantity of all parts is %d", total_quantity);
            printf("\n\n\t\t\tSorted in Original order\n\n\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[i], readfromfile->parts_name[i], total_quantity_array[i]);
            }

            //  sorting begins ... //
            for (i = 0; i < n; ++i) {
                for (j = i + 1; j < n; ++j) {
                    if (readfromfile->parts_quantity[idxArray[i]] > readfromfile->parts_quantity[idxArray[j]]) {
                        a = idxArray[i];
                        idxArray[i] = idxArray[j];
                        idxArray[j] = a;
                    }
                }
            }
            //  sorting ends ... //
            // Sorted Order
            printf("\n\n\t\t\tSorted in Ascending order\n\n\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[idxArray[i]], readfromfile->parts_name[idxArray[i]], readfromfile->parts_quantity[idxArray[i]]);
            }
            // Records of all parts that has stock quantity less than 10 units
            int less_than_10 = 0;
            for (int i = 0; i < 5; i++)
            {
                if (readfromfile->parts_quantity[i] < 10)
                {
                    less_than_10++;
                }
            }
            if (less_than_10 == 0)
            {
                printf("\n\n\t\t\tNo parts has stock quantity less than 10 units\n\n\n");
            }
            else if (less_than_10 <= 10)
            {
                printf("\n\n\t\tRecords of all parts that has stock quantity less than 10 units\n\n");
                for (int i = 0; i < 5; i++)
                {
                    if (readfromfile->parts_quantity[i] < 10)
                    {
                        printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[i], readfromfile->parts_name[i], total_quantity_array[i]);
                    }
                }
                break;
            }
            else
            {
                printf("\n\n\t\t\tSomething went wrong\n\n\n");
            }
        }
        else if (choice1 == 3)
        {
            FILE* f;
            f = fopen("war.txt", "r");
            FILE* fp2;
            int count = 0;  // Line counter (result)
            char filename[] = "war.txt";
            char c;  // To store a character read from file
            // Open the file
            fp2 = fopen("war.txt", "r");
            // Check if file exists
            if (fp2 == NULL)
            {
                printf("Could not open file %s", filename);
            }
            // Extract characters from file and store in character c
            for (c = getc(fp2); c != EOF; c = getc(fp2))
                if (c == '\n') // Increment count if this character is newline
                    count = count + 1;
            // Close the file
            fclose(fp2);


            for (int i = 0; i < count; i++) {
                fscanf(f, "%s", readfromfile->parts_name[i]);
                fscanf(f, "%d", &readfromfile->parts_id[i]);
                fscanf(f, "%d", &readfromfile->parts_quantity[i]);
                idxArray[i] = i; // piggyback initialization of the index array
            }
            fclose(f);

            for (int i = 0; i < 5; i++)
            {
                total_quantity_array[i] = readfromfile->parts_quantity[i];
                total_quantity = total_quantity + total_quantity_array[i];
            }
            printf("\n\n\t\tTotal available quantity of all parts is %d", total_quantity);
            printf("\n\n\t\t\tSorted in Original order\n\n\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[i], readfromfile->parts_name[i], total_quantity_array[i]);
            }

            //  sorting begins ... //
            for (i = 0; i < n; ++i) {
                for (j = i + 1; j < n; ++j) {
                    if (readfromfile->parts_quantity[idxArray[i]] > readfromfile->parts_quantity[idxArray[j]]) {
                        a = idxArray[i];
                        idxArray[i] = idxArray[j];
                        idxArray[j] = a;
                    }
                }
            }
            //  sorting ends ... //
            // Sorted Order
            printf("\n\n\t\t\tSorted in Ascending order\n\n\n");
            for (int i = 0; i < 5; i++)
            {
                printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[idxArray[i]], readfromfile->parts_name[idxArray[i]], readfromfile->parts_quantity[idxArray[i]]);
            }
        }
        // Records of all parts that has stock quantity less than 10 units
        int less_than_10 = 0;
        for (int i = 0; i < 5; i++)
        {
            if (readfromfile->parts_quantity[i] < 10)
            {
                less_than_10++;
            }
        }
        if (less_than_10 == 0)
        {
            printf("\n\n\t\t\tNo parts has stock quantity less than 10 units\n\n\n");
        }
        else if (less_than_10 <= 10)
        {
            printf("\n\n\t\tRecords of all parts that has stock quantity less than 10 units\n\n");
            for (int i = 0; i < 5; i++)
            {
                if (readfromfile->parts_quantity[i] < 10)
                {
                    printf("\t\tID: %d\t%s : %d\n", readfromfile->parts_id[i], readfromfile->parts_name[i], total_quantity_array[i]);
                }
            }
            break;
        }
        else
        {
            printf("\n\n\t\t\tSomething went wrong\n\n\n");
        }
        break;
    }
    default:
        printf("\n*******Enter Correct Input*******\n");
        break;
    }
}

void PartsInventorySearch()
{
    int search_id;
    printf("\n\n\t\t\tEnter the ID of the part you want to search: ");
    scanf("%d", &search_id);

    if (search_id > 100 && search_id <= 105)
    {
        FILE* f;
        f = fopen("wbz.txt", "r");
        FILE* fp2;
        int count = 0;  // Line counter (result)
        char filename[] = "wbz.txt";
        char c;  // To store a character read from file
        // Open the file
        fp2 = fopen("wbz.txt", "r");
        // Check if file exists
        if (fp2 == NULL)
        {
            printf("Could not open file %s", filename);
        }
        // Extract characters from file and store in character c
        for (c = getc(fp2); c != EOF; c = getc(fp2)) // read the data
            if (c == '\n') // Increment count if this character is newline
                count = count + 1;
        // Close the file
        fclose(fp2);

        for (int i = 0; i < count; i++)
        {
            fscanf(f, "%s", readfromfile->parts_name[i]); // scan into variables
            fscanf(f, "%d", &readfromfile->parts_id[i]);
            fscanf(f, "%d", &readfromfile->parts_quantity[i]);
        }
        fclose(f);
        printf("\n\n\t\t\tID: %d\t%s : %d\n\n", readfromfile->parts_id[search_id - 101], readfromfile->parts_name[search_id - 101], readfromfile->parts_quantity[search_id - 101]);
    }
    else if (search_id > 105 && search_id <= 110)
    {
        FILE* f;
        f = fopen("wsl.txt", "r");
        FILE* fp2;
        int count = 0;  // Line counter (result)
        char filename[] = "wsl.txt";
        char c;  // To store a character read from file
        // Open the file
        fp2 = fopen("wsl.txt", "r");
        // Check if file exists
        if (fp2 == NULL)
        {
            printf("Could not open file %s", filename);
        }
        // Extract characters from file and store in character c
        for (c = getc(fp2); c != EOF; c = getc(fp2))
            if (c == '\n') // Increment count if this character is newline
                count = count + 1;
        // Close the file
        fclose(fp2);

        for (int i = 0; i < count; i++)
        {
            fscanf(f, "%s", readfromfile->parts_name[i]);
            fscanf(f, "%d", &readfromfile->parts_id[i]);
            fscanf(f, "%d", &readfromfile->parts_quantity[i]);
        }
        fclose(f);
        printf("\n\n\t\t\tID: %d\t%s : %d\n\n", readfromfile->parts_id[search_id - 106], readfromfile->parts_name[search_id - 106], readfromfile->parts_quantity[search_id - 106]);
    }
    else if (search_id > 110 && search_id <= 115)
    {
        FILE* f;
        f = fopen("war.txt", "r");
        FILE* fp2;
        int count = 0;  // Line counter (result)
        char filename[] = "war.txt";
        char c;  // To store a character read from file
        // Open the file
        fp2 = fopen("war.txt", "r");
        // Check if file exists
        if (fp2 == NULL)
        {
            printf("Could not open file %s", filename);
        }
        // Extract characters from file and store in character c
        for (c = getc(fp2); c != EOF; c = getc(fp2))
            if (c == '\n') // Increment count if this character is newline
                count = count + 1;
        // Close the file
        fclose(fp2);

        for (int i = 0; i < count; i++)
        {
            fscanf(f, "%s", readfromfile->parts_name[i]);
            fscanf(f, "%d", &readfromfile->parts_id[i]);
            fscanf(f, "%d", &readfromfile->parts_quantity[i]);
        }
        fclose(f);
        printf("\n\n\t\t\tID: %d\t%s : %d\n\n", readfromfile->parts_id[search_id - 111], readfromfile->parts_name[search_id - 111], readfromfile->parts_quantity[search_id - 111]);
    }
    else
    {
        printf("\n\n\t\t\tID not found\n\n");
    }
}
