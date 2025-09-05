#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{

	char cust_name[50];
	printf("Welcome to your shopping cart!\n");
	printf("May I ask your name: ");
	fgets(cust_name, sizeof(cust_name), stdin);
	cust_name[strcspn(cust_name, "\n")] = 0; // Remove newline character

	int pizza_quantity = 10;
	int burger_quantity = 10;
	int taco_quantity = 10;
	float pizza_price = 12.50f;
	float burger_price = 10.00f;
	float taco_price = 8.00f;

	bool is_cart_empty = false;
	int cust_choice;
	int quantity = 0;

	while (!is_cart_empty)
	{
		printf("Hello %s\n", cust_name);
		printf("Please select an item from the menu:\n====================================\n");
		printf("For Pizza select 1\nFor Burger select 2\nFor Taco select 3\n");
		printf("Your choice: ");

		scanf("%d", &cust_choice);

		if (cust_choice == 1)
		{
			printf("Pizza selected.\nPrice of 1 slice is: %.2f\n", pizza_price);
			printf("Please select the quantity: ");
			scanf("%d", &quantity);
			while (quantity > pizza_quantity)
			{

				printf("Sufficient quantity not available\nSelect again");
			}
			pizza_quantity -= quantity;
			printf("%d slices of pizza added to cart\n", quantity);
			printf("Your total is %.2f\n", pizza_price * quantity);
			return 0;
		}
		else if (cust_choice == 2)
		{
			printf("Burger selected.\nPrice of 1 slice is: %f", burger_price);
			printf("Please select the quantity: ");
			scanf("%d", &quantity);

			while (quantity > burger_quantity)
			{
				printf("Sufficient quantity not available\nSelect again");
			}

			burger_quantity -= quantity;
			printf("%d pieces of burger added to cart\n", quantity);
			printf("Your total is %.2f\n", burger_price * quantity);
			return 0;
		}
		else if (cust_choice == 3)
		{
			printf("Taco selected.\nPrice of 1 slice is: %f", taco_price);
			printf("Please select the quantity: ");
			scanf("%d", &quantity);

			while (quantity > taco_quantity)
			{
				printf("Sufficient quantity not available\nSelect again");
			}

			taco_quantity -= quantity;
			printf("%d pieces of taco added to cart\n", quantity);
			printf("Your total is %.2f\n", taco_price * quantity);
			return 0;
		}
		else
		{
			printf("Wrong selection. Exiting\nSelect again.\n");
		}
	}

	return 0;
}
