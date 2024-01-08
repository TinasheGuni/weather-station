#ifndef RAINRECORD_H
#define RAINRECORD_H

#include "rain.h"

#include <QList>

class RainRecord {
public:
  RainRecord();

private:
  QList<Rain> record;
};

#endif // RAINRECORD_H
