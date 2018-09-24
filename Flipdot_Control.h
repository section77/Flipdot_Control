#ifndef _FLIPDOT_CONTROL_H
#define _FLIPDOT_CONTROL_H

class Flipdot_Control {
 public:
  Flipdot_Control() {}
  virtual ~Flipdot_Control() {}

  // everything relies on actual dot flipping
  virtual void flipToBlack(uint8_t x, uint8_t y);
  virtual void flipToColor(uint8_t x, uint8_t y);
};

#endif