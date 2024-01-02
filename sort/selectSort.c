#include <stdio.h>

#define BUFFER_SIZE 7
#define BUFFER_SIZE1 5

#if 0
int main()
{
//zijixiede
#if 0
    int sort[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    int pos = 0;
    int count = 0;
    for(int idx = 1; idx < BUFFER_SIZE ; idx++)
    {
        /* find min*/
        for (int jdx = idx + 1; jdx < BUFFER_SIZE; jdx++)
        {
            if (sort[jdx] < sort[idx])
            {
                idx = jdx;  
                jdx++; 
            }                    
        }
        if(sort[pos] > sort[idx])
        {
            /* exchange*/
            int tmp = sort[idx];
            sort[idx] = sort[pos];
            sort[pos] = tmp;
            pos++;
            idx = count + 1;
            printf(" cl:%d\n", pos);
        }
        else
        { 
            idx = count + 1;
            pos++;
            printf("bcl:%d\n", pos);
        }  
        count++;
          
    }
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("pos:%d, sort[pos]:%d\n", idx, sort[idx]);
    }
#endif
#if 0
    int target = 0;
    int pos = 0;
    printf("target:");
    scanf( "%d" ,   &target);
    int sort[BUFFER_SIZE1] = {24, 30, 58, 12, 39};
    BUFFER_SIZE1++;
    for (int idx = 0; idx < BUFFER_SIZE1; idx++)
    {
        int jdx = idx + 1;
        if (sort[idx] < sort[jdx])
        {
            idx++;
        }
        pos = jdx;
        printf("%d\n",pos);
        

    }
#endif

//

    return 0;
}

#endif

/* 数组做函数参数会自动弱化成指针 */
int printArray(int *array, int length)
{   
    int ret = 0;
    for (int idx = 0; idx < length; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    return ret;
}

int selectSort(int *array, int length)
{
    int ret = 0;   
    int minValue = 0;
    int minIndex = 0;
    for (int pos = 0; pos < length; pos++)
    {
        minValue = array[pos];
        for (int begin = pos + 1; begin < length; begin++)
        {
            /* 遍历到的元素比最小值要小，就更新元素*/
            if (minValue > array[begin])
            {
                minValue = array[begin];
                minIndex = begin;
            }
        }

        if (array[pos] > minValue)
        {
            int temp = array[pos];
            array[pos] = minValue;
            array[minIndex] = temp;
        }
    }
    return ret;
}
int main ()
{
    int array[] = {54, 78, 3, 89, 127, 128};
    int length = sizeof(array) / sizeof(array[0]);

    selectSort(array, length);
    printArray(array, length);

    return 0;
}