#include <FastLED.h>
#include <stdlib.h>
#include <stdio.h>

#define LED_PIN A3
#define NUM_LEDS 200
#define BRIGHTNESS 50

CRGB	leds[NUM_LEDS];

void	setup()
{
	FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
	FastLED.setBrightness(BRIGHTNESS);
}

void	loop()
{
	unsigned int i;
	unsigned int r;
	unsigned int g;
	unsigned int b;
	
	i, r, g, b = 0;
	while (i <= NUM_LEDS)
	{
		r = abs(rand() % 100 - rand() % 100);
		g = abs(rand() % 100 - rand() % 100);
		b = abs(rand() % 100 - rand() % 100);
		leds[i] = CRGB(r, g, b);
		FastLED.show();
		delay(500);
		i++;
	}
}

#include <FastLED.h>
#include <stdlib.h>
#include <stdio.h>

#define LED_PIN A3
#define NUM_LEDS 200
#define BRIGHTNESS 50

CRGB	leds[NUM_LEDS];

void	setup()
{
	FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
	FastLED.setBrightness(BRIGHTNESS);
}

void	loop()
{
	unsigned int i;
	unsigned int str_counter;
	unsigned int r;
	unsigned int g;
	unsigned int b;
	static const char *str = "ARTHUR EST UN SUCEUR";

	i, r, g, b = 0;
	str_counter = 0;
	while (i <= NUM_LEDS)
	{
		while (str_counter <= strlen(str))
		{
			r = abs(rand() % 100 - rand() % 100);
			g = abs(rand() % 100 - rand() % 100);
			b = abs(rand() % 100 - rand() % 100);
			leds[str[str_counter]] = CRGB(r, g, b);
			FastLED.show();
			delay(500);
			str_counter++;			
		}
		str_counter = 0;
		i += strlen(str);
	}
}

