# AUTOMOBILE-PARTS-INVENTORY-MANAGEMENT-SYSTEM
An automobile manufacturing plant in Sungai Tunas has been assembling different models of passenger cars. The plant has a number of car assembly divisions and each division assembles a different model. Each assembly division has its own warehouse storing and managing the automobile parts for a particular model. The assembly sections in each division obtain their parts from the warehouse in their respective assembly division.

The warehouse in each division will receive parts from suppliers and provide them to the assembly sections. As different sections assemble different parts of a car, they require different list of parts from their warehouse. The above-mentioned information is summarized in Table 1 as follows:

Table 1: Sample Model Divisions and Warehouse

![image](https://user-images.githubusercontent.com/124484779/216805835-ac6d864f-0e1a-4d51-963e-4438a97ea0ad.png)

The automobile manufacturing plant has decided to use an Automobile Parts Inventory 
Management System for all the warehouses in its assembly divisions. The inventory system has 
to be programmed in C and you had been recruited for the same. You are required to write a C
program with following features to manage automobile parts in all the warehouses:

1. Parts Inventory Creation in Warehouses

All parts and its details need to be recorded in parts inventory text files – one file for each 
warehouse.

Important Note: 

i. When testing the program, you should simulate at least three warehouses and record 
at least 5 parts under each of them. 

ii. All parts need to be given a unique part id.

iii. Initial quantity of each part need to be recorded in parts inventory text files.

iv. You may choose to exclude supplier details in parts inventory text files.

2. Parts Inventory Update

The program should have a feature for the warehouse to update the quantity of parts after 
receiving from suppliers (increase quantity) or providing to the assembly sections (decrease 
quantity). 

Important Note: 

i. Each part can be supplied by exactly one supplier only. However, one supplier can 
supply more than one part.

ii. Details of suppliers should be stored in supplier.txt text file. The parts id of parts 
they supplied need to be stored as well.

iii. The system should check for available quantity in warehouse before grating the 
request from assembly sections.

3. Parts Inventory Tracking

The program should have options to print:

i. Total available quantity of all parts sorted in ascending order by parts id.

ii. Records of all parts that has stock quantity less than 10 units in each warehouse.

Note: The program should prompt for user to select warehouse to print

4. Searching Functionalities

The program should have options to search:

i. Part’s record when searched by part’s id.

ii. The supplier details for a particular part
