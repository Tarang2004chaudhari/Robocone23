void notify() {
    if( abs(Ps3.event.analog_changed.button.triangle)){
     
      
       T=Ps3.data.analog.button.triangle;
       data1.t=T;
   }
if( abs(Ps3.event.analog_changed.button.cross) ){
 
  R=Ps3.data.analog.button.cross;
       data1.r=R;
  }
   else{
    R=0;
           data1.r=R;
      }
  if (abs(Ps3.event.analog_changed.button.l1)) {

    actuatorup = Ps3.data.analog.button.l1;
    
    if (actuatorup > 0 && actuatorup <= 255) {
        data1.tarang=actuatorup;

    } 
    else{
      actuatorup=0;
      data1.tarang=0;
    }
  }
  if (abs(Ps3.event.analog_changed.button.r1)) {
    actuatordown = Ps3.data.analog.button.r1;
    if (actuatordown > 0 && actuatordown <= 255) {
     data1.rohit=actuatordown;
    } 
  }
  else {
     data1.rohit=0;
     actuatordown=0;
    }


  if( abs(Ps3.event.analog_changed.button.l2) ){                                     
      pencilnumeticsclose=Ps3.data.analog.button.l2;
       data1.pencilnumeticsclose=pencilnumeticsclose;
    }
    else{
      pencilnumeticsclose=0;
       data1.pencilnumeticsclose=pencilnumeticsclose;
       
    }

}