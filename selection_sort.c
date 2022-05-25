// Selection Sort Algorithm

#include <stdio.h>

void swap(int* Ar, int i, int j)
{
    int temp = Ar[i];
    Ar[i] = Ar[j];
    Ar[j] = temp;
}

void print_Array(int* Ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", Ar[i]);
    }
}

void selection_Sort(int* Ar, int size)
{
    int i,j;
    int min, index;

    for (i = 0; i < size; i++)
    {
        min = Ar[i];
        index = i;

        for (j = i+1; j < size; j++)
        {
            if (min > Ar[j])
            {
                min = Ar[j];
                index = j;
            }
        }

        if (index != i)
        {
            swap(Ar,i,index);
        }
    }

}

int main()
{
    int Ar[10] = {5,1,6,4,2,7,0,3,9,8};
    int size = 10;
    print_Array(Ar,size);
    printf("\n");

    selection_Sort(Ar,size);
    print_Array(Ar,size);
    printf("\n");
}
