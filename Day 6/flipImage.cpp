/**
Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.
**/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++)
        {
            vector<int> x=image[i];
            reverse(x.begin(),x.end());
            image[i]=x;
        }
        
        for(int i=0;i<image.size();i++)
        {
            for(int j=0;j<image[0].size();j++)
                image[i][j]=image[i][j]^1;
        }
        
        return image;
    }
};
