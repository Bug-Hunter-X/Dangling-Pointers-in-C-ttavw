int main() {
    int x = 10;
    int *ptr = &x; 
    *ptr = 20; 
    printf("%d", x); //outputs 20
    int y = 10;
    int *ptr2 = &y;
    ptr = ptr2;
    *ptr = 30;
    printf("%d", y); //outputs 30
    int z = 10;
    int *ptr3 = &z; 
    ptr2 = ptr3; 
    ptr = ptr2; 
    *ptr = 40;
    printf("%d", z); //outputs 40
    int arr[5] = {1,2,3,4,5}; 
    int *ptr4 = arr;
    *ptr4 = 10; 
    printf("%d", arr[0]); //outputs 10
    return 0; 
}