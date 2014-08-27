Add Salt&Pepper Noise
=====================

This is a program that add salt&pepper noise to an image and remove them using media filter. (I write this code in ubuntu 14.04)

step1:

first we have an image :(lena for example)

![alt tag](https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/original.png)



step2:

I add salt&pepper noise to the above image and the result is the following:(I set pa=0.1and pb =0.05)
![alt tag](https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/add%20noise%20%20image.png)

step3:

after step2 we will generate an noise-image, next we can remove the salt-pepper noise using media filter
the effect:

![alt tag] (https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/the%20effect%20of%20media%20filter.png)

Note that the code is in main.cpp, I also add the `add-guassian-noise` section,again you can try different pa,pb of salt-pepper noise and different sigma,mean of guassian-noise.
