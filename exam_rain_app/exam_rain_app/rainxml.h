#ifndef RAINXML_H
#define RAINXML_H

#include "rainrecord.h"

#include <QRegularExpression>
#include <QXmlStreamWriter>

class RainXml : public RainRecord {
public:
  static RainXml *getInstance();
  QString writeToXml(/*passing rain data*/);

private:
  RainXml();
  bool checkStationCode(QString stn) const;

  static RainXml *onlyInstance;
  QRegularExpression re;
};

#endif // RAINXML_H
