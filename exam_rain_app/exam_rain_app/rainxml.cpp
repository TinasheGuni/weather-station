#include "rainxml.h"

RainXml *RainXml::getInstance() {}

QString RainXml::writeToXml() {
  QString xmlOutput;
  QXmlStreamWriter writer(&xmlOutput);

  // do initial setup of xml text
  writer.setAutoFormatting(true);
  writer.writeStartDocument();
  writer.writeStartElement("rainRecord");

  // loop through each rain pointer named r (do not code this)
  Rain *r = new Rain;
  {
    // use the meta-object to get the required data
    const QMetaObject *meta = r->metaObject();
    QString data =
        (meta->property(meta->indexOfProperty("data"))).read(r).toString();
    QStringList list(data.split(":"));

    // if the station code passes the test
    if (checkStationCode(list.at(0))) {
      // set up the <rain> tag and its sub-tags as required
      writer.writeStartElement("rain");

      QXmlStreamAttribute attr("date", list.at(1));
      writer.writeAttribute(attr);

      writer.writeTextElement("station", list.at(0));
      writer.writeTextElement("mm", list.at(2));

      writer.writeEndElement();
    }
  }
  // end xml text
  writer.writeEndElement();
  writer.writeEndDocument();

  return xmlOutput;
}

RainXml::RainXml() {}

bool RainXml::checkStationCode(QString stn) const {
  QRegularExpression re("^([A-Z])[a-z]{2}\\1[1-9]d{2}$");

  return re.match(stn).hasMatch();
}
