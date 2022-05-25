// Bubble Sort Algorithm

#include <stdio.h>

void swap(int* Ar, int i, int j)
{
    int temp = Ar[i];
    Ar[i] = Ar[j];
    Ar[j] = temp;
}

void print_Array(int *Ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",Ar[i]);
    }
}

void bubble_Sort(int* Ar, int size)
{
    int i,j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size-i-1; j++)
        {
            if (Ar[j] > Ar[j+1])
            {
                swap(Ar,j,j+1);
            }
        }
    }
}

int main()
{
    int Ar[10] = {0,2,6,1,23,7,5,1,3,5};
    int size = 10;
    print_Array(Ar,size);
    printf("\n");

    bubble_Sort(Ar,size);
    print_Array(Ar,size);
    printf("\n");
}
