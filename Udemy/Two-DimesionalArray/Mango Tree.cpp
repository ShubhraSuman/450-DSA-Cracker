#include <iostream>
#include <vector>
#include <climits>
std::vector<std::vector<int>> auxilMatrix( 6 , std::vector<int> (6, 0));
void prefixSum(std::vector<std::vector<int>> &mat,int n,int m,
               int x,int y)
{
    int element;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            element = mat[i][j];
            // std::cout<<"Element is: "<<element<<" "<<"mat[i-1][j] "<<(i>0?auxilMatrix[i-1][j]:0)<<" "<<"mat[i][j-1]"<< (j>0?auxilMatrix[i][j-1]:0)<<" "<<"mat[i-1][j-1]"<<((i>0&&j>0)?auxilMatrix[i-1][j-1]:0)<<std::endl;
            auxilMatrix[i][j] = element + (i>0?auxilMatrix[i-1][j]:0) + (j>0?auxilMatrix[i][j-1]:0) - ((i>0&&j>0)?auxilMatrix[i-1][j-1]:0);
            // std::cout<<auxilMatrix[i][j]<<" ";
        }
        //  std::cout<<std::endl;
    }
}
void findMaxFromMatrix(int n,int m,int &minFromLand)
{
    int firstQuad = 0;
    int secQuad = 0;
    int thirdQuad = 0;
    int fourthQuad = 0;
    int minElement = INT_MAX;
    std::cout<<" coming "<<std::endl;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            std::cout<<auxilMatrix[i][j]<<" ";
            firstQuad = auxilMatrix[i][j];
            std::cout<<"firstQuad "<<firstQuad<<" ";
            secQuad = auxilMatrix[i][m-1] - auxilMatrix[i][j];
            std::cout<<" secQuad "<<secQuad<<" ";
            thirdQuad = auxilMatrix[n-1][j] - auxilMatrix[i][j];
            std::cout<<" thirdQuad "<<thirdQuad<<" ";
            fourthQuad = auxilMatrix[n-1][m-1] - (firstQuad+secQuad+thirdQuad);
            std::cout<<"firstQuad "<<firstQuad<<" secQuad "<<secQuad<<" thirdQuad "<<thirdQuad<<" fourthQuad "<<fourthQuad<<std::endl;
            minElement = std::min(firstQuad,secQuad);
            minElement = std::min(thirdQuad,minElement);
            minElement = std::min(fourthQuad,minElement);
            if(minFromLand<minElement)
            {
                std::cout<<" Value of minFromLand: "<<minFromLand<<" Value of minElement: "<<minElement<<std::endl;
                minFromLand = minElement;
            }
        }
        std::cout<<std::endl;
    }
}
int main()
{
    std::vector<std::vector<int>> mat = {
       {0,1,1,0,0,0},
       {1,0,0,1,1,0},
       {0,1,0,0,0,0},
       {0,1,1,0,0,1},
       {1,0,0,1,1,0},
       {0,1,0,0,0,0}
    };
    int n = mat.size();
    int m = mat[0].size();
    //Make auxillary matrix containing prefix-sum 
    int x,y;
    x = 6;
    y = 6;
    prefixSum(mat,n,m,x,y);
    int minFromLand;
    findMaxFromMatrix(x,y,minFromLand);
    std::cout<<" Ans: "<<minFromLand<<std::endl;
    return 0;
}
