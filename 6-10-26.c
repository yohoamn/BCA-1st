#include <stdio.h>

int main()
{
    int n;

        printf("Enter a number: ");
            scanf("%d", &n);

                if (n >= 0)
                    {
                            if (n == 0)
                                        printf("Zero");
                                                else
                                                        {
                                                                    if (n % 2 == 0)
                                                                                    printf("Positive and Even");
                                                                                                else
                                                                                                                printf("Positive and Odd");
                                                                                                                        }
                                                                                                                            }
                                                                                                                                else
                                                                                                                                    {
                                                                                                                                            printf("Negative");
                                                                                                                                                }

                                                                                                                                                    return 0;
                                                                                                                                                    }