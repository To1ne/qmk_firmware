# Rot8

![rot8](https://i.imgur.com/kaEFkbb.jpg)

A rotary encoder on an Elite-C.

Keyboard Maintainer: [Toon Claes](https://iotcl.com)

Hardware:
* [Elite-C](https://splitkb.com/products/elite-c-low-profile-rev4-microcontroller)
* [EC-11 linear rotary encoder](https://splitkb.com/products/linear-rotary-encoder)
* [Knurled Metal Knob](https://splitkb.com/products/knurled-metal-encoder-knob)

Assembly:

* Place the Rotary encoder on D7, C6, D4 and B1 & F6.
* Solder a wire between C6 and GND

To compile and flash:

```sh
make handwired/rot8:default:dfu
```
