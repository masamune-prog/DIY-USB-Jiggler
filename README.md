# USB-Jiggler

This is a USB Jiggler using the Digispark Board. The script will work on most company laptops.

What does the script do?

It moves the cursor 2 pixels to the right then to the left at a fixed interval. Every time this is acheived, the digispark will flash

How to use?

Download the DigiSpark drivers from the official Github and the Arduino IDE. Make any changes you want to the mouse.ino script per your wishes and plug in !:)

Common problems

1. The Digispark is not recognised as an HIID device

The script includes a delay built in. This allows time for the computer in install the driver to execute the script

2. Port not compatible

In most cases, I have found that a USB C to A adapter like the one found in Samsung Phones work well. If not try another USB A port

3. Light flashing but mouse not moving

Unplug and Plug again!
