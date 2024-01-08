#ifndef CLIENT_H
#define CLIENT_H

#include "stationthread.h"
#include <QObject>

class Client : public QObject {
  Q_OBJECT
public:
  explicit Client(QObject *parent = nullptr);
  void handleFound();

signals:
};

#endif // CLIENT_H
