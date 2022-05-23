char gelenVeri;

const int Enable_A = 9;
const int Enable_B = 10;
const int inputA1 = 2;
const int inputA2 = 3;
const int inputB1 = 4;
const int inputB2 = 5;

void setup() {
  Serial.begin(9600);
  Serial.println("Arduino Bluetooth Kontrol");
  pinMode(Enable_A, OUTPUT);
  pinMode(Enable_B, OUTPUT);
  pinMode(inputA1, OUTPUT);
  pinMode(inputA2, OUTPUT);
  pinMode(inputB1, OUTPUT);
  
  pinMode(inputB2, OUTPUT);

}

void dur(){
   analogWrite(Enable_A, 0);
   analogWrite(Enable_B, 0);
  digitalWrite(inputA1, LOW);
  digitalWrite(inputA2, LOW);
  digitalWrite(inputB1 , LOW);
  digitalWrite(inputB2, LOW);
  }

void ileri(){
  analogWrite(Enable_A, 255);
   analogWrite(Enable_B, 255);
  digitalWrite(inputA1, HIGH);
  digitalWrite(inputB1 , HIGH);
  digitalWrite(inputA2, LOW);
  digitalWrite(inputB2, LOW);
  }

void geri(){
  analogWrite(Enable_A, 255);
   analogWrite(Enable_B, 255);
  digitalWrite(inputA1, LOW);
  digitalWrite(inputB1 , LOW);
  digitalWrite(inputA2, HIGH);
  digitalWrite(inputB2, HIGH);
  }

  void sol(){
  analogWrite(Enable_A, 255);
   analogWrite(Enable_B, 255);
  digitalWrite(inputA1, LOW);
  digitalWrite(inputB1 , HIGH);
  digitalWrite(inputA2, HIGH);
  digitalWrite(inputB2, LOW);
  }

  void solileri(){
    analogWrite(Enable_A, 255);
   analogWrite(Enable_B, 70);
  digitalWrite(inputA1, HIGH);
  digitalWrite(inputB1 , HIGH);
  digitalWrite(inputA2, LOW);
  digitalWrite(inputB2, LOW);
  }
   void solgeri(){
  analogWrite(Enable_A, 255);
   analogWrite(Enable_B, 70);
  digitalWrite(inputA1, LOW);
  digitalWrite(inputB1 , LOW);
  digitalWrite(inputA2, HIGH);
  digitalWrite(inputB2, HIGH);
  }
   void sag(){
  analogWrite(Enable_A, 255);
   analogWrite(Enable_B, 255);
  digitalWrite(inputA1, HIGH);
  digitalWrite(inputB1 , LOW);
  digitalWrite(inputA2, LOW);
  digitalWrite(inputB2, HIGH);
  }
   void sagileri(){
   analogWrite(Enable_A, 70);
   analogWrite(Enable_B, 255);
  digitalWrite(inputA1, HIGH);
  digitalWrite(inputB1 , HIGH);
  digitalWrite(inputA2, LOW);
  digitalWrite(inputB2, LOW);
  }
   void saggeri(){
  analogWrite(Enable_A, 70);
   analogWrite(Enable_B, 255);
  digitalWrite(inputA1, LOW);
  digitalWrite(inputB1 , LOW);
  digitalWrite(inputA2, HIGH);
  digitalWrite(inputB2, HIGH);
  }
void loop() {
 if (Serial.available()){
    
    gelenVeri=Serial.read();
     Serial.println(gelenVeri);

    if(gelenVeri=='S'){
      dur();
      }

      
     if(gelenVeri=='F'){
      ileri();
      }

      if(gelenVeri=='B'){
      geri();
      }
       if(gelenVeri=='L'){
      sol();
      }

      if(gelenVeri=='G'){
      solileri();
      }
      if(gelenVeri=='H'){
      solgeri();
      }
      if(gelenVeri=='R'){
      sag();
      }
       if(gelenVeri=='I'){
      sagileri();
      }
       if(gelenVeri=='J'){
      saggeri();
      }


   
}

}
