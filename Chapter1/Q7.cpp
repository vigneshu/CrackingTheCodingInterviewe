#include<iostream>

void replaceZeroes(int** matrix,int rowCount,int colCount)
{
    for(int i = 0;i<rowCount;i++)
    {
        for(int j = 0;j<colCount;j++)
        {
            if(matrix[i][j] == 0)
            {
                for(int k = 0;k<rowCount;k++)
                {
                    matrix[k][j] = 0;
                }
                
            }
        }
    }
}
void printMatrix(int **array,int rowCount,int colCount)
{
    for(int i = 0;i<rowCount; i++)
    {
         std::cout<<std::endl;
        for(int j = 0;j<colCount;j++)
         {
            std::cout<<array[i][j]<<"      ";
         }
        
    }
    std::cout<<std::endl;
}
int main()
{
    int colCount,rowCount;
    std::cout<<"Enter Col Size : ";
    std::cin>>colCount;
    std::cout<<"Enter Row Size : ";
    std::cin>>rowCount;
    int** matrix = new int*[rowCount];
    for(int i = 0;i<rowCount;i++)
    {
     matrix[i] = new int[colCount];   
    }
    for(int i = 0;i<rowCount;i++)
    {
        for(int j = 0;j<colCount;j++){
            std::cout<<"Enter value for row "<<i+1<<" Column "<<j+1 << " : ";
            std::cin>>matrix[i][j];
        }
    }
    
    printMatrix(matrix,rowCount,colCount);

    replaceZeroes(matrix,rowCount,colCount);
    std::cout<<"After Replacing zeroes "<<std::endl;
    printMatrix(matrix,rowCount,colCount);
    
    
    for(int i = 0;i<rowCount;i++)
        delete[] matrix[i];
    delete[] matrix;
    return 0;
}
