#include <stdio.h>
# include <stdlib.h>1
void wiggSort (int arrayIndex, int arraySize, int wigg_arr[])
{
    if ( arrayIndex>= arraySize -1)
        return;

    else
    {
//        if ( arrayIndex %2 == 0)
//        {
//            if (wigg_arr[arrayIndex] > wigg_arr[arrayIndex+1]){
//
//                 int temp = wigg_arr[arrayIndex];
//                 wigg_arr[arrayIndex] = wigg_arr[arrayIndex+1];
//                 wigg_arr[arrayIndex+1]=temp;
//
//                                                            }
//        }
//
//
//
//
//
//        else {
//
//                 if (wigg_arr[arrayIndex]<wigg_arr[arrayIndex+1])
//                    {
//                 int temp = wigg_arr[arrayIndex];
//                 wigg_arr[arrayIndex] = wigg_arr[arrayIndex+1];
//                 wigg_arr[arrayIndex+1]=temp;
//                    }
//
//            }


if ( arrayIndex%2==0 && wigg_arr[arrayIndex] > wigg_arr[arrayIndex+1] || arrayIndex %2 ==1 &&wigg_arr[arrayIndex]<wigg_arr[arrayIndex+1])
                    {
        int temp = wigg_arr[arrayIndex];
        wigg_arr[arrayIndex] = wigg_arr[arrayIndex+1];
        wigg_arr[arrayIndex+1]=temp;
                    }


 wiggSort (arrayIndex +1, arraySize, wigg_arr);

}
}

int main(){

//const int R=5;
//  int arr[R];
//
//    printf("Enter your numbers between 0 and 5000:\n");
//
//    for (int i = 0; i < R; i++)
//    {
//        scanf("%d", &arr[i]);
//
//        if ( arr[i] <= 0 )
//        {
//            arr[i]=0;
//        }
//
//
//        else if (arr[i] >= 5000)
//        {
//            arr[i]=5000;
//        }
//
//
//
//    }
//
//
//wiggSort (0, R, arr);
//
//    printf("Wiggle Sorted Array:\n");
//
//    for (int i = 0; i <R; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//


int length;

    while (1) {
        printf("Enter array length: ");
        scanf("%d", &length);

        if (length < 1 || length > 520) {
            printf("available length is between 1 and 520\n");
            continue;
        }
        break;
    }

    printf("enter your values\n");
    int* arr = (int*) malloc(length * sizeof(int));
    int count = 0;

    while (count < length) {
        int value;
        scanf("%d", &value);

        if (value < 0 || value > 5000) {
            printf("available value is between 0 and 5000\n");
            continue;
        }

        arr[count] = value;
        count++;
    }

    wiggSort (0, length, arr);
         printf("Wiggle Sorted Array:\n");

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
