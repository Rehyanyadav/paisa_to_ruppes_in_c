//WAP to convert given paisa into its equivalent rupee and paisa as per the following format.

#include <stdio.h>

int main() {
    int paisa, rupees, remaining_paisa;

    // Input the amount in paisa
    printf("Enter the amount in paisa: ");
    scanf("%d", &paisa);

    // Calculate rupees and remaining paisa
    rupees = paisa / 100;
    remaining_paisa = paisa % 100;

    // Display the result
    printf("%d paisa is equal to %d rupee(s) and %d paisa.\n", paisa, rupees, remaining_paisa);

    return 0;
}
