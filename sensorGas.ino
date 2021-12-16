int sensor = 4;
int led = 15;
int umbral = 200;

//Configuracion del programa
void setup () {
  //Codigo
  Serial.begin (115200);//Inicia la comunicación serial
  Serial.println ("Programa iniciado");//Mensaje de prueba
  delay (1000);//Espera estandar
  pinMode(led,OUTPUT);
}

//Cuerpo del programa
void loop () {
  //Codigo
  int dato = analogRead (sensor);//Lectura del sensor
  Serial.print ("El valor del sensor es: ");
  Serial.println (dato);//Se imprimen los datos
  delay (1000);//Espera estandar
  if(dato>umbral){
	digitalWrite(pin,HIGH);
  }else{
    digitalWrite(pin,HIGH);
  }
}
