#include <stdio.h>

int main()
{
  // Declare variables: an array `a` of size 10, `loc` for location, `i` for loop index, and `item` for the search element
  int a[10], loc, i, item;

  // Prompt the user to input array elements
  printf("Enter array elements: \n");
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]); // Read each element of the array

  // Prompt the user to enter the number to search for
  printf("Enter a number to search\n");
  scanf("%d", &item); // Store the number in `item`

  // Linear search: Traverse the array to find the `item`
  for (i = 0; i < 10; i++)
  {
    if (a[i] == item) // If the required element is found
    {
      loc = i + 1; // Store its position (1-based index)
      break;       // Exit the loop as the item is found
    }
  }

  // Print the location of the item
  // Note: If the item is not found, `loc` might be uninitialized, consider initializing it
  printf("Location of item is %d \n", loc);

  return 0; // Return 0 to indicate successful execution
}
