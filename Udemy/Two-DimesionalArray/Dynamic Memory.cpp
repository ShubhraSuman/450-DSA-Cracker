Dynamic memory allocation:
1) int *arr = new int[n];
2) Heap memory.
3) Job of programmer is to create and delete memory.
4) Delete memory :
delete[] arr 
5) Dynamic integer 
int *x = new int;
Static memory:
1) All local variale resides in stack -> static memory.
2) Allocated by compiler.

## 2D Dynamic array:
int **createDynamicArray(int rows,int columns)
{
    int** arr = new int*[rows];
    
    //Allocate memory for each row
    for(int i=0;i<rows;i++)
    {
        arr[i] = new int[columns];
    }
    //Address of 2d array is returned
    return arr;
}
int main()
{
    int rows,columns;
    cin>>rows>>columns;
    int **arr = createDynamicArray(rows,columns);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<arr[i][j]<<" "<<endl;
        }
    }
}
