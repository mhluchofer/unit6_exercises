#include "unit6_exercises/magic_printer.h"

int main(int argc, char **argv) {

  ros::init(argc, argv, "magic_print_main_node");

  ros::NodeHandle _n("magic_print_ns");

  MagicPrinter magic_printer_object(_n);

  int value_integer = 42;
  string value_string = "Adventure Time is Back!";

  //magic_printer_object.PrintInteger(value_integer);
  //magic_printer_object.PrintString(vallue_string);

  magic_printer_object.PrintGeneric<int>(value_integer);
  magic_printer_object.PrintGeneric<string>(value_string);
  return 0;
}