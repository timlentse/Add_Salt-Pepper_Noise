#include <iostream>
#include<opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

// 以下是添加椒盐噪声子函数
void Add_salt_pepper_Noise(Mat &srcArr, float pa, float pb )

{    RNG rng; // rand number generate，实现随机数产生的类
    int amount1=srcArr.rows*srcArr.cols*pa;
    int amount2=srcArr.rows*srcArr.cols*pb;
    for(int counter=0; counter<amount1; ++counter)
    {
      //访问Mat类型数组里面的元素值可用 array.at<数组元素类型>（int row,int col);
      //随机令某个元素值为0即可看作是椒噪声，255为盐噪声
      // rng.uniform( 0,srcArr.rows), rng.uniform(0, srcArr.cols)随机选取行列
     srcArr.at<uchar>(rng.uniform( 0,srcArr.rows), rng.uniform(0, srcArr.cols)) =0;

    }
     for (int counter=0; counter<amount2; ++counter)
     {
     srcArr.at<uchar>(rng.uniform(0,srcArr.rows), rng.uniform(0,srcArr.cols)) = 255;
     }
}


// 以下为添加高斯白噪声子函数
void Add_gaussian_Noise(Mat &srcArr,double mean,double sigma)
{
    Mat NoiseArr = srcArr.clone();
    RNG rng;
    rng.fill(NoiseArr, RNG::NORMAL, mean,sigma);  //产生高斯白噪声矩阵

     //randn(dstArr,mean,sigma); //同样可以使用randn函数产生高斯白噪声
    add(srcArr, NoiseArr, srcArr);   //矩阵srcArr+NoiseArr->srcArr,至此，已经向srcArr添加高斯白噪声
}


//  主函数部分
int main(int argc, char *argv[])
{
    Mat srcArr;

 if (argc<=1)
     {   srcArr = imread("/home/timlentse/Qtproject/lena.bmp"); }

   else if (argc>=2)
     {   srcArr = imread(argv[1]);}

  cvtColor(srcArr,srcArr, CV_RGB2GRAY,1);
  imshow("The original Image", srcArr);

 Mat srcArr1 = srcArr.clone();
 Mat srcArr2 = srcArr.clone();
 Mat dstArr;

 float sigma,mean,pa,pb;
 cout<<"input the sigma and mean of the expect gaussian noise = ";
 cin>>sigma>>mean;

 cout<<"input the pa and pb of the expect salt&pepper noise = ";
 cin>>pa>>pb;

 //添加概率为pa,pb的椒盐噪声点
  Add_salt_pepper_Noise(srcArr1, pa,pb);
  imshow("Add salt and pepper noise to image ", srcArr1);
  imwrite("salt&pepper noise image.tif",srcArr1);

 //中值滤波
  medianBlur(srcArr1, dstArr, 5);
  imshow ("The effect after median filter",dstArr);
  imwrite("filter image.tif",dstArr);

 //添加高斯白噪声
  Add_gaussian_Noise(srcArr2, mean, sigma);
  imshow("Add gaussian noise to image", srcArr2);
  imwrite("salt&pepper noise image.tif",srcArr2);
  waitKey(0);
  return 0;
}

