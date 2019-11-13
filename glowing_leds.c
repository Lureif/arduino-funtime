#include <FastLED.h>
#define LED_PIN A3
#define NUM_LEDS 200

CRGB	leds[NUM_LEDS];

void	setup_led_strip()
{
	FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
}

void	loop()
{
	leds[0] = CRGB(255, 0, 0);
	FastLED.show();
	delay(500);
}
