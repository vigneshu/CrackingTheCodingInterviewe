// Example program
#include <iostream>
#include <string>
#include <cmath>
void rotateMatrix(int **array,int size)
{
    for(int layer = 0;layer<ceil(size/2); layer++)
    {
        for(int j = layer;j<size-layer-1;j++)
         {
             int temp = array[layer][j];
             //change top
             array[layer][j]=array[size-1-j][layer];
             //change left
             array[size-1-j][layer]=array[size-1-layer][size-1-j];
             //change bottom
             array[size-1-layer][size-1-j] = array[j][size-1-layer];
             //change right
             array[j][size-1-layer] =temp ;
         }
    }
}

void printMatrix(int **array,int size)
{
    for(int i = 0;i<size; i++)
    {
         std::cout<<std::endl;
        for(int j = 0;j<size;j++)
         {
            std::cout<<array[i][j]<<"      ";
         }
        
    }
    std::cout<<std::endl;
}
int main()
{
    int size;
    std::cout << "Enter size of 2D array ";
    std::cin>>size;
    int colCount = size;
        int rowCount = size;
    int **array = new int*[rowCount];//rowCount
    for(int i = 0;i<rowCount;i++)
    {
        array[i] = new int[colCount];
    }
    for(int i = 0;i<rowCount;i++)
    {
        for(int j = 0;j<colCount;j++){
            std::cout<<"Enter value for row "<<i+1<<" Column "<<j+1 << " : ";
            std::cin>>array[i][j];
        }
    }
    printMatrix(array,size);

    rotateMatrix(array,size);
    std::cout<<"After Rotation "<<std::endl;
    printMatrix(array,size);
         for(int i = 0; i<size;i++)
    delete[] array[i];
    delete[] array;
   
   return 0;
}
