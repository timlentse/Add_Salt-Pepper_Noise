Add-Salt-Pepper_Noise
=====================

This is a program that add salt&pepper noise to an image and remove them using media filter. (I write this code in ubuntu)

step1:

first we have an image :(lena for example)

![alt tag](https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/original.png)



step2:

I add salt&pepper noise to the above image and the result is the following:(I set pa=0.1and pb =0.05)
![alt tag](https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/add%20noise%20%20image.png)

step3:

after step2 we have an noise-image,so we can remove the salt-pepper using media filter
the effect:

![alt tag] (https://raw.githubusercontent.com/timlentse/Add-Salt_Pepper_noise/master/the%20effect%20of%20media%20filter.png)

now the code is in main.cpp,i also add the add-guassian-noise section,and you can try different pa,pb of salt-pepper noise and differnet sigma,mean of guassian-noise.
