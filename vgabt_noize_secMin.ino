#include <VGAX.h>
#define FNT_UFONT_HEIGHT 6
#define FNT_UFONT_SYMBOLS_COUNT 95
const unsigned char fnt_ufont_data[FNT_UFONT_SYMBOLS_COUNT][1 + FNT_UFONT_HEIGHT] PROGMEM = {
  { 1, 128, 128, 128,   0, 128,   0, }, //glyph '!' code=0
  { 3, 160, 160,   0,   0,   0,   0, }, //glyph '"' code=1
  { 5,  80, 248,  80, 248,  80,   0, }, //glyph '#' code=2
  { 5, 120, 160, 112,  40, 240,   0, }, //glyph '$' code=3
  { 5, 136,  16,  32,  64, 136,   0, }, //glyph '%' code=4
  { 5,  96, 144, 104, 144, 104,   0, }, //glyph '&' code=5
  { 2, 128,  64,   0,   0,   0,   0, }, //glyph ''' code=6
  { 2,  64, 128, 128, 128,  64,   0, }, //glyph '(' code=7
  { 2, 128,  64,  64,  64, 128,   0, }, //glyph ')' code=8
  { 3,   0, 160,  64, 160,   0,   0, }, //glyph '*' code=9
  { 3,   0,  64, 224,  64,   0,   0, }, //glyph '+' code=10
  { 2,   0,   0,   0,   0, 128,  64, }, //glyph ',' code=11
  { 3,   0,   0, 224,   0,   0,   0, }, //glyph '-' code=12
  { 1,   0,   0,   0,   0, 128,   0, }, //glyph '.' code=13
  { 5,   8,  16,  32,  64, 128,   0, }, //glyph '/' code=14
  { 4,  96, 144, 144, 144,  96,   0, }, //glyph '0' code=15
  { 3,  64, 192,  64,  64, 224,   0, }, //glyph '1' code=16
  { 4, 224,  16,  96, 128, 240,   0, }, //glyph '2' code=17
  { 4, 224,  16,  96,  16, 224,   0, }, //glyph '3' code=18
  { 4, 144, 144, 240,  16,  16,   0, }, //glyph '4' code=19
  { 4, 240, 128, 224,  16, 224,   0, }, //glyph '5' code=20
  { 4,  96, 128, 224, 144,  96,   0, }, //glyph '6' code=21
  { 4, 240,  16,  32,  64,  64,   0, }, //glyph '7' code=22
  { 4,  96, 144,  96, 144,  96,   0, }, //glyph '8' code=23
  { 4,  96, 144, 112,  16,  96,   0, }, //glyph '9' code=24
  { 1,   0, 128,   0, 128,   0,   0, }, //glyph ':' code=25
  { 2,   0, 128,   0,   0, 128,  64, }, //glyph ';' code=26
  { 3,  32,  64, 128,  64,  32,   0, }, //glyph '<' code=27
  { 3,   0, 224,   0, 224,   0,   0, }, //glyph '=' code=28
  { 3, 128,  64,  32,  64, 128,   0, }, //glyph '>' code=29
  { 4, 224,  16,  96,   0,  64,   0, }, //glyph '?' code=30
  { 4,  96, 144, 176, 128, 112,   0, }, //glyph '@' code=31
  { 4,  96, 144, 240, 144, 144,   0, }, //glyph 'A' code=32
  { 4, 224, 144, 224, 144, 224,   0, }, //glyph 'B' code=33
  { 4, 112, 128, 128, 128, 112,   0, }, //glyph 'C' code=34
  { 4, 224, 144, 144, 144, 224,   0, }, //glyph 'D' code=35
  { 4, 240, 128, 224, 128, 240,   0, }, //glyph 'E' code=36
  { 4, 240, 128, 224, 128, 128,   0, }, //glyph 'F' code=37
  { 4, 112, 128, 176, 144, 112,   0, }, //glyph 'G' code=38
  { 4, 144, 144, 240, 144, 144,   0, }, //glyph 'H' code=39
  { 3, 224,  64,  64,  64, 224,   0, }, //glyph 'I' code=40
  { 4, 240,  16,  16, 144,  96,   0, }, //glyph 'J' code=41
  { 4, 144, 160, 192, 160, 144,   0, }, //glyph 'K' code=42
  { 4, 128, 128, 128, 128, 240,   0, }, //glyph 'L' code=43
  { 5, 136, 216, 168, 136, 136,   0, }, //glyph 'M' code=44
  { 4, 144, 208, 176, 144, 144,   0, }, //glyph 'N' code=45
  { 4,  96, 144, 144, 144,  96,   0, }, //glyph 'O' code=46
  { 4, 224, 144, 224, 128, 128,   0, }, //glyph 'P' code=47
  { 4,  96, 144, 144, 144,  96,  16, }, //glyph 'Q' code=48
  { 4, 224, 144, 224, 160, 144,   0, }, //glyph 'R' code=49
  { 4, 112, 128,  96,  16, 224,   0, }, //glyph 'S' code=50
  { 3, 224,  64,  64,  64,  64,   0, }, //glyph 'T' code=51
  { 4, 144, 144, 144, 144,  96,   0, }, //glyph 'U' code=52
  { 3, 160, 160, 160, 160,  64,   0, }, //glyph 'V' code=53
  { 5, 136, 168, 168, 168,  80,   0, }, //glyph 'W' code=54
  { 4, 144, 144,  96, 144, 144,   0, }, //glyph 'X' code=55
  { 3, 160, 160,  64,  64,  64,   0, }, //glyph 'Y' code=56
  { 4, 240,  16,  96, 128, 240,   0, }, //glyph 'Z' code=57
  { 2, 192, 128, 128, 128, 192,   0, }, //glyph '[' code=58
  { 5, 128,  64,  32,  16,   8,   0, }, //glyph '\' code=59
  { 2, 192,  64,  64,  64, 192,   0, }, //glyph ']' code=60
  { 5,  32,  80, 136,   0,   0,   0, }, //glyph '^' code=61
  { 4,   0,   0,   0,   0, 240,   0, }, //glyph '_' code=62
  { 2, 128,  64,   0,   0,   0,   0, }, //glyph '`' code=63
  { 3,   0, 224,  32, 224, 224,   0, }, //glyph 'a' code=64
  { 3, 128, 224, 160, 160, 224,   0, }, //glyph 'b' code=65
  { 3,   0, 224, 128, 128, 224,   0, }, //glyph 'c' code=66
  { 3,  32, 224, 160, 160, 224,   0, }, //glyph 'd' code=67
  { 3,   0, 224, 224, 128, 224,   0, }, //glyph 'e' code=68
  { 2,  64, 128, 192, 128, 128,   0, }, //glyph 'f' code=69
  { 3,   0, 224, 160, 224,  32, 224, }, //glyph 'g' code=70
  { 3, 128, 224, 160, 160, 160,   0, }, //glyph 'h' code=71
  { 1, 128,   0,   128, 128, 128, 0, }, //glyph 'i' code=72
  { 2,   0, 192,  64,  64,  64, 128, }, //glyph 'j' code=73
  { 3, 128, 160, 192, 160, 160,   0, }, //glyph 'k' code=74
  { 1, 128, 128, 128, 128, 128,   0, }, //glyph 'l' code=75
  { 5,   0, 248, 168, 168, 168,   0, }, //glyph 'm' code=76
  { 3,   0, 224, 160, 160, 160,   0, }, //glyph 'n' code=77
  { 3,   0, 224, 160, 160, 224,   0, }, //glyph 'o' code=78
  { 3,   0, 224, 160, 160, 224, 128, }, //glyph 'p' code=79
  { 3,   0, 224, 160, 160, 224,  32, }, //glyph 'q' code=80
  { 3,   0, 224, 128, 128, 128,   0, }, //glyph 'r' code=81
  { 2,   0, 192, 128,  64, 192,   0, }, //glyph 's' code=82
  { 3,  64, 224,  64,  64,  64,   0, }, //glyph 't' code=83
  { 3,   0, 160, 160, 160, 224,   0, }, //glyph 'u' code=84
  { 3,   0, 160, 160, 160,  64,   0, }, //glyph 'v' code=85
  { 5,   0, 168, 168, 168,  80,   0, }, //glyph 'w' code=86
  { 3,   0, 160,  64, 160, 160,   0, }, //glyph 'x' code=87
  { 3,   0, 160, 160, 224,  32, 224, }, //glyph 'y' code=88
  { 2,   0, 192,  64, 128, 192,   0, }, //glyph 'z' code=89
  { 3,  96,  64, 192,  64,  96,   0, }, //glyph '{' code=90
  { 1, 128, 128, 128, 128, 128,   0, }, //glyph '|' code=91
  { 3, 192,  64,  96,  64, 192,   0, }, //glyph '}' code=92
  { 3,  96, 192,   0,   0,   0,   0, }, //glyph '~' code=93
  { 4,  48,  64, 224,  64, 240,   0, }, //glyph '£' code=94
};
VGAX vga;
//Don't change anything before. Get sure, that VGA.h library is installed. RX and TX pins on arduino are connected to TX and RX pins on HC-06. HC-06 VCC is connected to A5. Vga pins connected like on examles of vga library https://forum.arduino.cc/index.php?topic=320238.0 https://github.com/smaffer/vgax
//A4 for noize module out. Connect it with small (like 22*10^5 pF) capasitor to GND for better noize detecting. GND and VCC on noize module connected to GND and 3.3V pins on the arduino.
const char str[11][2] PROGMEM = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", ":"};//A set of strings to print time.
void clk2vga(int h, int m, bool dot = true, int xfrom = 48, int yfrom = 27) {//Function, that prints time to display, using previous set of strings. It can be done better using wriring to buffer.
  //h- for first number (hours or minutes), m - for another one (minutes or seconds. Minutes and seconds mode is default, just to be sure, you can connect A1 and A0 or A1 and GND. To set hours and minutes mode connect A1 and A2 or A1 and high voltage (3.3 or 5 V).
  //bool dot==true print ":" between numbers. Default is printing.
  //xfrom and yfrom allows you to set position of number (dublicates an option from .printPROGMEM with adding limits).
  vga.clear(11);
  if ((h > 99) || (h < 0))h = 99;
  if ((m > 99) || (m < 0))m = 99;
  if (xfrom < 1)xfrom = 1;
  if (xfrom > 96)xfrom = 96;
  if (yfrom < 0)yfrom = 0;
  if (yfrom > 55)yfrom = 55;
  vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, str[h / 10], xfrom, yfrom, 1);
  vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, str[h % 10], xfrom + 5, yfrom, 1);
  if (dot)vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, str[10], xfrom + 12, yfrom, 1);
  vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, str[m / 10], xfrom + 15, yfrom, 1);
  vga.printPROGMEM((byte*)fnt_ufont_data, FNT_UFONT_SYMBOLS_COUNT, FNT_UFONT_HEIGHT, 3, 1, str[m % 10], xfrom + 20, yfrom, 1);
};

int tim[2] = {0, 0};
void setup() {
  pinMode(19, OUTPUT);//A5 or 19 is connected to HC-06 Vcc pin. Allows to turn it off during programm. That's requied due to optimize vga.
  digitalWrite(19, HIGH);
  pinMode(LED_BUILTIN, OUTPUT);//Luminodiode on board is used to indicate, that data from bluetooth was delivered if it gets on. When time is over it gets off again.
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
  while (tim[0] + tim[1] == 0) {
    vga.delay(1000);
    if (Serial.availableForWrite()) {
      Serial.println("W8");//In bluetooth terminal you can see this request.
      Serial.flush();
    };
    while (Serial.available()) {//Time should be send in one string like this: "300", where number means minutes or seconds in differend modes. (Just write number in bluetooth terminal).
      digitalWrite(LED_BUILTIN, HIGH);
      //tim[1]=Serial.read(); (If you don't use terminal, then use this string instead of next one in order to simplify sending in your programm on the other one bluetooth device. (Just send integer).
      tim[1] = Serial.parseInt();
      tim[0] = tim[1] / 60;
      tim[1] = tim[1] % 60;
    }
  }
  Serial.print(tim[0]);//Arduino would return time, that it received. Then bluetooth is disabling.
  Serial.print(" : ");
  Serial.println(tim[1]);
  Serial.flush();
  Serial.end();
  vga.delay(1000);
  digitalWrite(19, LOW);

  vga.begin();
  clk2vga(tim[0], tim[1]);//First printing to screen. The screen is disabled until time is set.
}
void loop() {
  pinMode(18, INPUT);//A4 or 18 pin for out of digital noize module.

  pinMode(16, OUTPUT);
  pinMode(15, INPUT);
  pinMode(14, OUTPUT);

  digitalWrite(16, HIGH);
  digitalWrite(14, LOW);

  int noizeCount = 10;
  if (digitalRead(15))
  { //HIGH - minutes and hours mode
    int timeCount = 0;
    while (tim[0] + tim[1] > 0)
    {
      vga.delay(1000);
      timeCount++;
      if (timeCount >= 60) {
        timeCount = 0;
        if (tim[1] > 0)tim[1]--;
        else if (tim[0] > 0) {
          tim[0]--;
          tim[1] = 59;
        }
        clk2vga(tim[0], tim[1]);
      }
      if (analogRead(18) < 512)noizeCount = noizeCount - 10;
      if (noizeCount <= 0) {
        noizeCount = 10;
        if (tim[1] > 0)tim[1]--;
        else {
          if (tim[0] > 0) {
            tim[0]--;
            tim[1] = 59;
          }
          else
            tim[1] = 0;
        }
        clk2vga(tim[0], tim[1]);
      }
      if (noizeCount < 10)noizeCount++;
    }
  }
  else//LOW or just otherwise for seconds and minutes module
    while (tim[0] + tim[1] > 0)
    {
      vga.delay(1000);
      if (tim[1] > 0)tim[1]--;
      else if (tim[0] > 0) {
        tim[0]--;
        tim[1] = 59;
      }
      if (analogRead(18) < 512)noizeCount = noizeCount - 10;
      if (noizeCount <= 0) {
        noizeCount = 10;
        if (tim[0] > 0)tim[0]--;
        else {
          tim[1] = 0;
        }
        clk2vga(tim[0], tim[1]);
      }
      if (noizeCount < 10)noizeCount++;
      clk2vga(tim[0], tim[1]);
    };
  vga.end();
  digitalWrite(LED_BUILTIN, LOW);
}
