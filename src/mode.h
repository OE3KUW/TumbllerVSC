// ===========================================================================
// ATTRIBUTION
// Based on the official ELEGOO Tumbller V1.1 source:
// https://github.com/elegooofficial/ELEGOO-TumbllerV1.1-Self-Balancing-Car-Tutorial
// Repository/project: https://github.com/OE3KUW/TumbllerVSC
// Educational and personal learning use; see ATTRIBUTION.md.
// Commercial use requires separate permission from the relevant rights holders.
// ===========================================================================

enum FUNCTION_MODE
{
  IDLE,
  IRREMOTE,
  OBSTACLE,
  FOLLOW,
  BLUETOOTH,
  FOLLOW2,
} function_mode = IDLE;

enum MOTION_MODE
{
  STANDBY,
  FORWARD,
  BACKWARD,
  TURNLEFT,
  TURNRIGHT,
  STOP,
  START,
} motion_mode = START;
