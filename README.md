Add Salt&Pepper Noise
=====================
###Requirement:
1.you should have  Opencv installed on your PC

2. QT(suggested) or VS
3. 
3. Some c++  standar libs
4. 
Notes: This is a project for  adding  salt&pepper noise to an image and remove them using median filter (I write this code in ubuntu 14.04)

#####step1:

First we have an image below as original image :(lena for example)

![alt tag](https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/original.png)



#####step2:

I add salt&pepper noise to the image above and the result is the following:(I set pa=0.1and pb =0.05)
![alt tag](https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/add%20noise%20%20image.png)

#####step3:

After step2 we will generate an noise-image,  we can remove the salt-pepper noise using 
[median filter](http://en.wikipedia.org/wiki/Median_filter) 
And the effect:

![alt tag](https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/the%20effect%20of%20media%20filter.png)

Note that the code is in main.cpp, I also add the `add-guassian-noise` section,again you can try different pa,pb of salt-pepper noise and different sigma,mean of guassian-noise.
