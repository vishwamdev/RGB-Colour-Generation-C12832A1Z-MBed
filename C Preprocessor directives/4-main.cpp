 #include "mbed.h" 

PwmOut red_led(p23); 
PwmOut green_led(p24); 
PwmOut blue_led(p25); 

int main() { 
     while(1) { 

       //red 
         float i1 = 1; 
         while(i1 >= 0) { 
             red_led = i1; 
             green_led = 1; 
             blue_led = 1; 
            ThisThread::sleep_for(500ms);  
            i1 -= 0.1; 
        }
        ThisThread::sleep_for(2000ms); 
           float i2 = 0; 
         while(i2 <= 1) { 
            red_led = i2; 
            ThisThread::sleep_for(500ms);  
            i2 += 0.1; 
         } 

         //green 
        float i3 = 1; 
        while(i3 >= 0) { 
             green_led = i3; 
             red_led = 1; 
             blue_led = 1; 
             ThisThread::sleep_for(500ms);  
            i3 -= 0.1; 
        }ThisThread::sleep_for(2000ms); 
         float i4 = 0; 
         while(i4 <= 1) { 
            green_led = i4; 
            ThisThread::sleep_for(500ms);  
             i4 += 0.1; 
         } 

         //blue 
        float i5 = 1; 
         while(i5 >= 0) { 
           blue_led = i5; 
          green_led = i5; 
            red_led = i5; 
             ThisThread::sleep_for(500ms);  
             i5 -= 0.1; 
        } ThisThread::sleep_for(2000ms); 
         float i6 = 0; 
        while(i6 <= 1) { 
            blue_led = i6; 
             green_led = i6; 
            red_led = i6;             
ThisThread::sleep_for(500ms);              
i6 += 0.1;        
}      
} 
} 
