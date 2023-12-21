// Trent Tucker
// Fall 2020
// C++ code for morse code decoder

extern byte val;
extern byte width;
extern byte ascii;

extern "C" { 
  void decode_morse();
}

void decodeMorse(const String & string, char message[])
{
  // string contains the input binary string separated by single spaces
  // message contains the decoded English characters and numbers
  int x = 0;
  for(int i = 0; i <= string.length(); i++) {
    if(string[i] == ' ' || string[i] == '\0') {
      decode_morse();
      val = 0;
      width = 0;
      message[x++] = ascii;
    }
    else { 
    val = val * 2 + (string[i] - '0');
    width++;
    }
  }
  message[x] = '\0';
}

void decodeMorse()
{
  Serial.println("Input a Morse code string (separate the code for characters by a space):");

  while (!Serial.available()) delay(100);
  String string = Serial.readString();

  Serial.print("The Morse code string is: ");
  Serial.println(string);

  // string = "1000 100 0"; // "01 1000";
  char message[100];

  decodeMorse(string, message);

  if(strlen(message) > 0) {
    Serial.print("The decoded message is: ");
    Serial.println(message);
  } else {
    Serial.print("Failure in decoding the input Morse code\n");
  }
}

void setup() {
  // initialize serial communications
  Serial.begin(9600);

  decodeMorse();
}

void loop() {
  delay(20000); // 20,000 millisecs == 20 seconds
  Serial.println("*");
}
