/*Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ).
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,d;
    printf("enter the number:");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);
    rotatearr(arr,n);
    return 0;
}
void rotatearr(int array[],int p)
{
    int d,i,j,rotval;
    char str[10],l;
    printf("enter the string:");
    scanf("%s",&str[l]);
    if(str[l]=="left" || str[l]=="right")
        printf("enter the indicative value:");
    scanf("%d",&d);
    if(str[l]=="left"){
    for(i=0; i<p; i++)
    {
        for(j=i+1; j<p; j++)
        {
            array[i]=array[j+d-1];
            array[i+1]=array[j+d];

            }
    }

}
*/
#include<stdio.h>
#include<conio.h>

// Function prototype
void rotatearr(int array[], int n, int d);

int main() {
    int n, d;
    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    {
        printf("Enter the indicative value: ");
        scanf("%d", &d);

        rotatearr(arr, n, d);

        printf("Rotated array: ");
        for(i = 0; i < n; i++)
            printf("%d ", arr[i]);
    }

    return 0;
}

void rotatearr(int array[], int n, int d) {
    int temp[d];
     printf("Enter the direction (left/right): ");
    char str[10];
    scanf("%s", str);

    if(str[0] == 'left')

    // Store the first d elements in a temporary array
    for(int i = 0; i < d; i++)
        temp[i] = array[i];

    // Shift the remaining elements to the left
    for(int i = d; i < n; i++)
        array[i - d] = array[i];

    // Place the elements from the temporary array at the end
    for(int i = 0; i < d; i++)
        array[n - d + i] = temp[i];
}

/*
#include<stdio.h>

// Function prototype
void rotatearr(int array[], int n, int d);

int main() {
    int n, d;
    printf("Enter the number: ");
    scanf("%d", &n);

    int arr[n], i;
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the indicative value: ");
    scanf("%d", &d);

    rotatearr(arr, n, d);

    printf("Rotated array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void rotatearr(int array[], int n, int d) {
    int temp[d];
    char str[10];

    printf("Enter the direction (left/right): ");
    scanf("%s", str);

    if(str[0] == 'left') {
        // Store the first d elements in a temporary array
        for(int i = 0; i < d; i++)
            temp[i] = array[i];

        // Shift the remaining elements to the left
        for(int i = d; i < n; i++)
            array[i - d] = array[i];

        // Place the elements from the temporary array at the end
        for(int i = 0; i < d; i++)
            array[n - d + i] = temp[i];
    }
    else if(str[0] == 'right') {
        // Store the last d elements in a temporary array
        for(int i = 0; i < d; i++)
            temp[i] = array[n - d + i];

        // Shift the remaining elements to the right
        for(int i = n - 1; i >= d; i--)
            array[i] = array[i - d];

        // Place the elements from the temporary array at the beginning
        for(int i = 0; i < d; i++)
            array[i] = temp[i];
    }
}
*/
