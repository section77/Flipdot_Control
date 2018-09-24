# Section77 Unified Flipdot Control #

Flip dot displays are an awesome technology and old parts are relatively cheap to buy used these days.

The first step in using them as a black hole for time is figuring out how to actually flip a dot in either direction. After that, the code you write is essentially the same for any display that has a rectangular matrix, which is most probably every commercial flip dot display built for busses, trains or other usages you can get used.

This library provides an unified interface to flip a dot on an rectangular matrix and serves as a common base for higher-level applications (e.g. games or text displays).

## How Does it Work? ##

Any display driver that supports the Section77 unified flipdot control abstraction layer will implement the Flipdot\_Control base class, thus hiding the display-specific implementation of the actual dot flipping.

Applications can then be developed against this base class and do not have to worry about the highs and lows of the display control logic. This means easy development of applications and fast deployment on different displays.