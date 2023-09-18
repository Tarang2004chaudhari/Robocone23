void invkinematics()
{
      x = 2*(xHat - 127);
      y = 2*(127 - yHat);

      if(x<-255)
      {
        x = -255;
      }
      if(x>255)
      {
        x = 255;
      }
      if(y<-255)
      {
        y = -255;
      }
      if(y>255)
      {
        y = 255;
      }
      if(x<20 and x>-20)
      {
        x = 0;
      }
      if(y<20 and y>-20)
      {
        y = 0;
      }

      //Calculating the speeds of all 4 motors
      S1 = (-0.7071*x + 0.7071*y)*0.7352; // max = 265.1285592, min = -265.1285592
      S2 = (-0.7071*x - 0.7071*y)*0.7352;
      S3 = (0.7071*x - 0.7071*y)*0.7352;
      S4 = (0.7071*x + 0.7071*y)*0.7352;     

      //Mapping the Range of PWM in the Range of RPM
      //  S1=map(s1, -265, 265, -424, 424);
      //  S2=map(s2, -265, 265, -424, 424);
      //  S3=map(s3, -265, 265, -424, 424);
      //  S4=map(s4, -265, 265, -424, 424);
      
      PWM1 = abs(S1);
      PWM2 = abs(S2);
      PWM3 = abs(S3);
      PWM4 = abs(S4);      
      // Serial.print(F("\r\nS1: "));
      // Serial.print(S1);
      // Serial.print(F("\r\nS2: "));
      // Serial.print(S2);
      // Serial.print(F("\r\nS3: "));
      // Serial.print(S3);
      // Serial.print(F("\r\nS4: "));
      // Serial.print(S4);

}