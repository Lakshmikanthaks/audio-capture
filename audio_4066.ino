void setup() {
  
  pinMode(13, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8,  OUTPUT);
  pinMode(5,  OUTPUT);
  pinMode(4,  OUTPUT);
  pinMode(7,  OUTPUT);
    
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(13, HIGH);   
  delay(5000);              
  digitalWrite(13, LOW);    
  delay(1);
     
  digitalWrite(10, HIGH);   
  delay(5000);              
  digitalWrite(10, LOW);    
  delay(1);   

  digitalWrite(11, HIGH);   
  delay(5000);              
  digitalWrite(11, LOW);    
  delay(1);  

  digitalWrite(12, HIGH);   
  delay(5000);              
  digitalWrite(12, LOW);    
  delay(1);     

//----------------------------

  digitalWrite(8, HIGH);   
  delay(5000);              
  digitalWrite(8, LOW);    
  delay(1);
     
  digitalWrite(5, HIGH);   
  delay(5000);              
  digitalWrite(5, LOW);    
  delay(1);   
     
  digitalWrite(4, HIGH);   
  delay(5000);              
  digitalWrite(4, LOW);    
  delay(1);   
     
  digitalWrite(7, HIGH);   
  delay(5000);              
  digitalWrite(7, LOW);    
  delay(10000);   
      
              
}
