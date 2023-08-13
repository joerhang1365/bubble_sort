#include <stdio.h>
#include <stdbool.h>

typedef int i32;

// moves value a to value b and vice versa
void swap(i32 *a, i32 *b)
{
  i32 temp = *a;
  *a = *b;
  *b = temp;
  return;
}

// sort each element one at a time, left to right, from largest to smallest
void sort(i32 array[], i32 length)
{
  bool swapped = false;
  for(i32 i = 0; i < length - 1; i++)
  {
    swapped = false;
    for(i32 j = 0; j < length - i - 1; j++)
    {
      // the largest element keeps getting pushed further and further back
      if(array[j] > array[j + 1])
      {
        swap(&array[j], &array[j + 1]);
        swapped = true;
      }
    }
    // if there are no more elements that need to be swapped end sort
    if(swapped == false)
    {
      break;
    }
  }
  return;
}

void print(i32 array[], i32 length)
{
  for(i32 i = 0; i < length - 1; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
  return;
}

i32 main(i32 argv, char **argc)
{
  i32 array[] = {10, 12, 54, 1, 12, 60, 2, 3, 4, 5, 100, 12, 40};
  i32 length = sizeof(array) / sizeof(array[0]);
  (void)print(array, length);
  (void)sort(array, length);
  (void)print(array, length);
  return 0;
}
