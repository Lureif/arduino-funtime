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
