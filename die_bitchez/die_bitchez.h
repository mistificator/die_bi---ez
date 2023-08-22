#ifndef DIE_BITCHEZ_H
#define DIE_BITCHEZ_H

#include <QMainWindow>
#include <QMap>
#include <QVector>
#include <QString>
#include "ui_die_bitchez.h"

class DieBitchez : public QMainWindow
{
	Q_OBJECT

public:
	DieBitchez(QWidget *parent = 0, Qt::WFlags flags = 0);
	~DieBitchez();

private:
	Ui::DieBitchezClass ui;
	QMap< QString, QVector<QString> > translate_table;
	void createTranslateTable();
	QString convert(const QString & _src_text);
	qint64 counter;
	QString version() const;
	QString version(const QString & _module_name) const;
private slots:
	void on_actionQuit_triggered();
	void on_src_text_textChanged();
	void on_actionRefresh_triggered();
	void on_actionAbout_triggered();
};

#endif // DIE_BITCHEZ_H
