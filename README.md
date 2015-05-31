# Add Salt&Pepper Noise
Code for adding Salt&Pepper noise to an image ,you can customize `pa` and `pb` to your need.

### Requirement:

* OpenCV (2.2.0+)

* IDE: {QT(suggested) or VS} or maybe simply a `g++` compiler

* Some C++  standard libs

**Notes:** This is a project for  adding  salt&pepper noise to an image and try to remove it using median filter `(I write this code in ubuntu 14.04)`

###### First we have an image below as original image :`(lena for example)`

<p align="center"><img src="https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/original.png"/></p>

###### To add salt&pepper noise to the image above and the result is the following:`(I set pa=0.1and pb =0.05)`

<p align="center"><img src="https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/add%20noise%20%20image.png"/></p>

###### After step2 we will generate an noise-image,  we can remove the salt-pepper noise using<a href="http://en.wikipedia.org/wiki/Median_filter"> Median filter</a>

And the effect:
<p align="center"><img src="https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/the%20effect%20of%20media%20filter.png"/></p>

Note that the code is in main.cpp, I also add the `add-guassian-noise` section,again you can try different pa,pb of salt-pepper noise and different sigma,mean of guassian-noise.
