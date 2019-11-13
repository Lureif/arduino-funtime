#include <FastLED.h>
#include <stdlib.h>
#include <stdio.h>

#define LED_PIN A3
#define NUM_LEDS 200
CRGB	leds[NUM_LEDS];

void	setup()
{
	FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
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
		r = rand() % 100 + 1;
		g = rand() % 100 + 1;
		b = rand() % 100 + 1;		
		leds[i] = CRGB(r, g, b);
		FastLED.show();
		delay(500);
		i++;
	}
}
