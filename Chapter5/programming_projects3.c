// Modify the broker.c program of Section 5.2 by making both of the following changes:

// (a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade.
// (b) Add statements that compute the commission charged by a rival broker ($33 plus 3c per share for fewer than 2000 shares;
//      $33 plus 2c per share for 2000 shares or more).
// Display the rival's commission as well as the commission charged by the original broker.

#include <stdio.h>

int main(void)
{
    float commission;
    float rivalCommission;

    float transactionSize;

    int pricePerShare;
    int numberOfShares;

    printf("Enter price per share: ");
    scanf("%d", &pricePerShare);

    printf("Enter number of shares: ");
    scanf("%d", &numberOfShares);

    transactionSize = pricePerShare * numberOfShares;

    if (transactionSize < 2500.00f)
    {
        commission = 30.00f + (.017f * transactionSize);
    }
    else if (transactionSize < 6250.00f)
    {
        commission = 56.00f + (.0066f * transactionSize);
    }
    else if (transactionSize < 20000.00f)
    {
        commission = 76.00f + (.0034f * transactionSize);
    }
    else if (transactionSize < 50000.00f)
    {
        commission = 100.00f + (.0022f * transactionSize);
    }
    else if (transactionSize < 500000.00f)
    {
        commission = 155.00f + (.0011 * transactionSize);
    }
    else
    {
        commission = 255.00f + (.0009f * transactionSize);
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

    rivalCommission = numberOfShares >= 2000 ? (33.0f + (numberOfShares * 0.02f)) : (33.0f + (numberOfShares * 0.03f));

    printf("Commission: %.2f\n", commission);
    printf("Rival Commission: %.2f\n", rivalCommission);

    return 0;
}