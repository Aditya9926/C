#include <stdio.h>
int main() {
int n, arr[50], sum=0;
float avg;
printf("Enter number of elements: ");
scanf("%d", &n);
for(int i=0; i<n; i++) {
scanf("%d", &arr[i]);
sum += arr[i];
}
avg = (float)sum / n;
printf("Sum = %d, Average = %.2f\n", sum, avg);
return 0;
}