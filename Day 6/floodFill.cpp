/**
An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

You are also given three integers sr, sc, and newColor. You should perform a flood fill on the image starting from the pixel image[sr][sc].

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with newColor.

Return the modified image after performing the flood fill.
**/

class Solution {
public:
     void dfs(vector<vector<int>>& image, int x, int y, int newColor, int oldColor){
        if(x<0 || y<0 || x>=image.size() || y>=image[0].size() || image[x][y]!=oldColor || image[x][y]==newColor) return;
        image[x][y]=newColor;
        dfs(image,x+1,y,newColor,oldColor);
        dfs(image,x-1,y,newColor,oldColor);
        dfs(image,x,y-1,newColor,oldColor);
        dfs(image,x,y+1,newColor,oldColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor=image[sr][sc];
        dfs(image,sr,sc,newColor,oldColor);
        return image;
    }
};
