#ifndef HEXVIEWTAB_H
#define HEXVIEWTAB_H

#include "QHexView/qhexview.h"
#include "tooltab.h"
#include <QWidget>
#include <qfileinfo.h>

class HexViewTab : public ToolTab
{
    Q_OBJECT

private:
    QHexView* m_hexViewWidget;
    QWidget* createPage();

public:
    explicit HexViewTab(QWidget *parent, QString path);

signals:
    void modifyData(bool modified);
    void dataEqual();

public slots:
    void setTabData() override;
    void saveTabData() override;

};

#endif // HEXVIEWTAB_H
