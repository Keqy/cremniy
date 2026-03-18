#ifndef CODEEDITORTAB_H
#define CODEEDITORTAB_H

#include "QCodeEditor.hpp"
#include "tooltab.h"
#include <QWidget>
#include <qfileinfo.h>
#include <qlabel.h>

class CodeEditorTab : public ToolTab
{
    Q_OBJECT

private:
    QCodeEditor* m_codeEditorWidget;
    QWidget* m_overlayWidget;
    bool forceSetData = false;

public:
    explicit CodeEditorTab(QWidget *parent, QString path);

signals:
    void modifyData(bool modified);
    void dataEqual();
    void askData();
    void setHexViewTab();

public slots:

    void setTabData() override;
    void saveTabData() override;

};

#endif // CODEEDITORTAB_H
