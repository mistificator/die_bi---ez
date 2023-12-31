#include "die_bitchez.h"
#include <QTime>
#include <Windows.h>
#include <QMessageBox>

DieBitchez::DieBitchez(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	createTranslateTable();
}

DieBitchez::~DieBitchez()
{

}

void DieBitchez::on_actionQuit_triggered()
{
	close();
}

#define LETTER(X) translate_table[QString::fromWCharArray(L#X, 1)]
#define SYN(X) << QString::fromWCharArray(L#X, 1)
#define EQ(X) = translate_table[QString::fromWCharArray(L#X, 1)]
void DieBitchez::createTranslateTable()
{
	LETTER(A) SYN(Ḁ) SYN(₳) SYN(Ѧ);
	LETTER(B) SYN(ᴃ) SYN(ß) SYN(ẞ);
	LETTER(C) SYN(ƆƆƆƆƇƇζ) SYN(Ҁ) SYN(₵) SYN(₡) SYN(ʗ);
	LETTER(D) SYN(Ɖ) SYN(Ɑ) SYN(Ɗ);
	LETTER(E) SYN(Ʃ) SYN(Ӛ) SYN(Ξ) SYN(Ɛ) SYN(Ə) SYN(Ҽ);
	LETTER(F) SYN(Ϝ) SYN(₣) SYN(₮) SYN(Ӻ) SYN(Ƒ) SYN(ⅎ);
	LETTER(G) SYN(₲) SYN(Ǥ);
	LETTER(H) SYN(Ӊ);
	LETTER(I) SYN(Ї);
	LETTER(J) SYN(Ɉ);
	LETTER(K) SYN(₭) SYN(Ҝ) SYN(Ҟ);
	LETTER(L) SYN(Ӆ) SYN(Ʌ) SYN(Ƚ) SYN(Ⱡ);
	LETTER(M) SYN(Ӎ);
	LETTER(N) SYN(₦) SYN(Ƞ) SYN(Ɲ);
	LETTER(O) SYN(Ơ) SYN(Ѻ) SYN(Θ);
	LETTER(P) SYN(Ƿ) SYN(₱);
	LETTER(Q) SYN(Ω) SYN(Ɋ);
	LETTER(R) SYN(Ɽ) SYN(Ԅ) SYN(Ԇ) SYN(Ӄ) SYN(Ɍ) SYN(Ʀ);
	LETTER(S) SYN(Ϩ);
	LETTER(T) SYN(Ƭ) SYN(₸) SYN(Ԏ) SYN(Ϯ);
	LETTER(U) SYN(Ʉ);
	LETTER(V) SYN(Ѷ) SYN(Ѵ);
	LETTER(W) SYN(₩) SYN(Ɯ);
	LETTER(X) SYN(Ӿ);
	LETTER(Y) SYN(Ɣ) SYN(Ɏ) SYN(Ұ) SYN(Ӯ);
	LETTER(Z) SYN(Ȝ) SYN(ᴣ);

	LETTER(a) SYN(ḁ) SYN(ѧ);
	LETTER(b) SYN(ᵬ) SYN(ᴃ);
	LETTER(c) SYN(ͻ) SYN(ҁ);
	LETTER(d) SYN(∂) SYN(Ԁ);
	LETTER(e) SYN(ӛ) SYN(ᶓ) SYN(ҽ);
	LETTER(f) SYN(ӻ);
	LETTER(g) SYN(ǥ);
	LETTER(h) SYN(ϰ) SYN(Ћ);
	LETTER(i) SYN(ΐ) SYN(ᵻ);
	LETTER(j) SYN(ȷ) SYN(ǰ) SYN(ʝ);
	LETTER(k) SYN(ⱪ) SYN(ҡ) SYN(ҝ);
	LETTER(l) SYN(ɭ);
	LETTER(m) SYN(ᵯ) SYN(µ) SYN(ɱ);
	LETTER(n) SYN(ṋ) SYN(ȵ);
	LETTER(o) SYN(ȫ) SYN(ѻ);
	LETTER(p) SYN(ϼ);
	LETTER(q) SYN(ᶐ) SYN(ɋ);
	LETTER(r) SYN(ӄ) SYN(ᴚ);
	LETTER(s) SYN(ȿ) SYN(ʂ) SYN(ᴤ) SYN(ϩ);
	LETTER(t) SYN(ᵵ) SYN(ԏ) SYN(†);
	LETTER(u) SYN(ᵾ);
	LETTER(v) SYN(ϑ);
	LETTER(w) SYN(ɯ) SYN(ѿ) SYN(ѡ);
	LETTER(x) SYN(ӿ);
	LETTER(y) SYN(ɏ) SYN(ұ);
	LETTER(z) SYN(ƺ) SYN(ɀ) SYN(ȝ) SYN(ʑ);

	LETTER(А) EQ(A);
	LETTER(Б) SYN(Ƌ) SYN(Ҕ);
	LETTER(В) EQ(B);
	LETTER(Г) SYN(Ӷ) SYN(Ѓ);
	LETTER(Д) EQ(D); LETTER(Д) SYN(Δ);
	LETTER(Е) EQ(E);
	LETTER(Ё) EQ(E);
	LETTER(Ж) SYN(Җ) SYN(Ӂ);
	LETTER(З) EQ(Z);
	LETTER(Й) SYN(Ӥ);
	LETTER(К) EQ(K);
	LETTER(Л) SYN(Ԓ)SYN(Ӆ) SYN(Ʌ);
	LETTER(М) EQ(M);
	LETTER(О) EQ(O);
	LETTER(П) SYN(∏);
	LETTER(Р) EQ(P);
	LETTER(С) EQ(C);
	LETTER(Т) EQ(T);
	LETTER(У) EQ(Y);
	LETTER(Ф) SYN(Ψ);
	LETTER(Ч) SYN(Ҷ) SYN(ϥ) SYN(Ҹ);
	LETTER(Х) EQ(X);
	LETTER(Ц) SYN(Ҵ);
	LETTER(Щ) SYN(Ϣ);
	LETTER(Ы) SYN(Ӹ);
	LETTER(Э) SYN(Ӭ) SYN(Є);
	LETTER(Ю) SYN(Ѥ) SYN(Ѩ);
	LETTER(Я) SYN(Ӄ);

	LETTER(а) EQ(a);
	LETTER(б) SYN(ƀ) SYN(ҕ);
	LETTER(в) EQ(B) SYN(ɞ);
	LETTER(д) EQ(d);
	LETTER(е) EQ(e);
	LETTER(ё) EQ(e);
	LETTER(ж) SYN(җ) SYN(ӂ);
	LETTER(з) EQ(z);
	LETTER(и) SYN(ϰ);
	LETTER(й) SYN(ӥ);
	LETTER(к) EQ(k);
	LETTER(л) SYN(ԉ) SYN(ӆ);
	LETTER(м) EQ(m);
	LETTER(о) EQ(o);
	LETTER(р) EQ(p);
	LETTER(с) EQ(c);
	LETTER(т) EQ(t);
	LETTER(у) EQ(y);
	LETTER(ф) SYN(ȸ) SYN(ȹ) SYN(φ);
	LETTER(ч) SYN(ҷ) SYN(ҹ);
	LETTER(х) EQ(x);
	LETTER(ц) SYN(ᶙ) SYN(ҵ);
	LETTER(щ) SYN(ϣ);
	LETTER(э) SYN(ӭ);
	LETTER(ю) SYN(ѥ) SYN(ѩ);
	LETTER(я) SYN(ᴥ) SYN(ӄ);

	LETTER(2) SYN(ƻ);
	LETTER(3) SYN(ᶚ);
	LETTER(5) SYN(Ƽ);
	LETTER(8) SYN(Ȣ);
}

QString DieBitchez::convert(const QString & _src_text)
{
	qsrand(QTime::currentTime().msec());
	QString _dst_text;
	const int _count = _src_text.count();
	_dst_text.reserve(_count);
	QMap<QString, QString> tmp_table;
	for (int _i = 0; _i < _count; _i++)
	{
		if (!tmp_table.contains(_src_text[_i]))
		{
			if (translate_table.contains(_src_text[_i]))
			{
				const QVector<QString> _entry = translate_table[_src_text[_i]];
				tmp_table[_src_text[_i]] = _entry.at(qrand() % _entry.count());
			}
			else
			{
				tmp_table[_src_text[_i]] = _src_text[_i];
			}
		}
		_dst_text += tmp_table[_src_text[_i]];
	}
	return _dst_text;
}

void DieBitchez::on_src_text_textChanged()
{
	ui.dst_text->setPlainText(convert(ui.src_text->toPlainText()));
}

void DieBitchez::on_actionRefresh_triggered()
{
	on_src_text_textChanged();
}

void DieBitchez::on_actionAbout_triggered()
{
	QString _debug_str;
#ifdef _DEBUG
	_debug_str += "(" + QString::fromUtf16(L"∂ӛᴃᵾǥ") + ")";
#endif
	QString _arch_str;
#ifdef _M_AMD64
	_arch_str += QString::fromUtf16(L"ӿ64");
#elif _M_IX86
	_arch_str += QString::fromUtf16(L"ӿ86");
#else
	_arch_str += QString::fromUtf16(L"ᵾȵⱪȵȫѡȵ ѧᴚͻЋᵻ†ᶓͻ†ᵾᴚᶓ");
#endif
	QMessageBox::about(this, windowTitle(), QString::fromUtf16(L"(ͻ)2012-2015 ΞԂѡḁӄԂ Ɉ. ₲ɭѻɯ") + "\n" + QString::fromUtf16(L"Ѵᶓᴚʂΐȫṋ") + " " + convert(version()) + " " + _debug_str + " " + _arch_str);

}

QString DieBitchez::version() const
{
	return version(QCoreApplication::applicationFilePath());
}

QString DieBitchez::version(const QString & _module_name) const
{
	QString _str;
	const int _ver_sz = ::GetFileVersionInfoSize(_module_name.utf16(), 0);
	if (_ver_sz)
	{
		char * _ver_data = new char[_ver_sz];
		if (::GetFileVersionInfo(_module_name.utf16(), 0, _ver_sz, _ver_data))
		{
			VS_FIXEDFILEINFO * _info;
			UINT _len;
			if (::VerQueryValue(_ver_data, (LPTSTR)QString("\\").utf16(), (LPVOID *)&_info, &_len))
			{
				if (_info->dwProductVersionMS == 0 && _info->dwProductVersionLS == 0)
				{
					_str =
						QString::number(HIWORD(_info->dwFileVersionMS)) + "." +
						QString::number(LOWORD(_info->dwFileVersionMS)) + "." +
						QString::number(HIWORD(_info->dwFileVersionLS)) + "." +
						QString::number(LOWORD(_info->dwFileVersionLS));
				}
				else
				{
					_str =
						QString::number(HIWORD(_info->dwProductVersionMS)) + "." +
						QString::number(LOWORD(_info->dwProductVersionMS)) + "." +
						QString::number(HIWORD(_info->dwProductVersionLS)) + "." +
						QString::number(LOWORD(_info->dwProductVersionLS));
				}
			}
		}
		delete [] _ver_data;
	}
	return _str;
}
