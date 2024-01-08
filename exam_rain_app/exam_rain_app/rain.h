#ifndef RAIN_H
#define RAIN_H

#include <QObject>

class Rain : public QObject {
  Q_OBJECT
public:
  explicit Rain(QObject *parent = nullptr);

signals:

private:
  QString station;
  QDate date;
  int mm;
};

#endif // RAIN_H
