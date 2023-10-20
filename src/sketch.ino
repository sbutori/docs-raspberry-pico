void setup() {
  // Iniciar a comunicação serial
  Serial1.begin(115200);
  Serial1.println("Prova de Conceito: Leitura de potenciômetro com o Raspberry Pi Pico W");
}

void loop() {
  // Ler os valores ADC do GPIO26 (ADC0)
  int value = analogRead(26);

  // Converter o valor da leitura do ADC para voltagem
  // Ver https://learn.sparkfun.com/tutorials/analog-to-digital-conversion/relating-adc-value-to-voltage
  float voltage = (value * 3.3) / 1023.0;

  // Imprimir o valor do ADC e a voltagem para o terminal
  Serial1.print("Valor do ADC: ");
  Serial1.print(value);
  Serial1.print(", Voltagem: ");
  Serial1.print(voltage);
  Serial1.println("V");

  // Esperar 1 segundo antes de ler novamente
  delay(1000);
}
