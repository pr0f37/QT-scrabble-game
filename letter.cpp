#include "letter.h"
#include "delegate.h"

Letter::Letter()
{

    QString tempBody;
    switch (qrand()%33){
    case 0:
	tempBody = "A";
	break;
    case 1:
	tempBody = QTableView::trUtf8("Ą");
	break;
    case 2:
	tempBody = "B";
	break;
    case 3:
	tempBody = "C";
	break;
    case 4:
	tempBody = QTableView::trUtf8("Ć");
	break;
    case 5:
	tempBody = "D";
	break;
    case 6:
	tempBody = "E";
	break;
    case 7:
	tempBody = QTableView::trUtf8("Ę");
	break;
    case 8:
	tempBody = "F";
	break;
    case 9:
	tempBody = "G";
	break;
    case 10:
	tempBody = "H";
	break;
    case 11:
	tempBody = "I";
	break;
    case 12:
	tempBody = "J";
	break;
    case 13:
	tempBody = "K";
	break;
    case 14:
	tempBody = "L";
	break;
    case 15:
	tempBody = QTableView::trUtf8("Ł");
	break;
    case 16:
	tempBody = "M";
	break;
    case 17:
	tempBody = "N";
	break;
    case 18:
	tempBody = QTableView::trUtf8("Ń");
	break;
    case 19:
	tempBody = "O";
	break;
    case 20:
	tempBody = QTableView::trUtf8("Ó");
	break;
    case 21:
	tempBody = "P";
	break;
    case 22:
	tempBody = "R";
	break;
    case 23:
	tempBody = "S";
	break;
    case 24:
	tempBody = QTableView::trUtf8("Ś");
	break;
    case 25:
	tempBody = "T";
	break;
    case 26:
	tempBody = "U";
	break;
    case 27:
	tempBody = "W";
	break;
    case 28:
	tempBody = "Y";
	break;
    case 29:
	tempBody = "Z";
	break;
    case 30:
	tempBody = QTableView::trUtf8("Ź");
	break;
    case 31:
	tempBody = QTableView::trUtf8("Ż");
	break;
    case 32:
	tempBody = "Space";
	break;
    }
    Letter temp(tempBody);
    body = temp.getBody();
    points = temp.getPoints();

}

Letter::Letter(QString letter){
    body = letter;
    if (body.compare("A") == 0)
	    points = "1";
    else if (body.compare(QTableView::trUtf8("Ą")) == 0)
	points = "5";
    else if (body.compare("B") == 0)
	points = "3";
    else if (body.compare("C") == 0)
	points = "2";
    else if (body.compare(QTableView::trUtf8("Ć")) == 0)
	points = "6";
    else if (body.compare("D") == 0)
	points = "2";
    else if (body.compare("E") == 0)
	points = "1";
    else if (body.compare(QTableView::trUtf8("Ę")) == 0)
	points = "5";
    else if (body.compare("F") == 0)
	points = "5";
    else if (body.compare("G") == 0)
	points = "5";
    else if (body.compare("H") == 0)
	points = "3";
    else if (body.compare("I") == 0)
	points = "1";
    else if (body.compare("J") == 0)
	points = "3";
    else if (body.compare("K") == 0)
	points = "2";
    else if (body.compare("L") == 0)
	points = "2";
    else if (body.compare(QTableView::trUtf8("Ł")) == 0)
	points = "3";
    else if (body.compare("M") == 0)
	points = "2";
    else if (body.compare("N") == 0)
	points = "1";
    else if (body.compare(QTableView::trUtf8("Ń")) == 0)
	points = "7";
    else if (body.compare("O") == 0)
	points = "1";
    else if (body.compare(QTableView::trUtf8("Ó")) == 0)
	points = "5";
    else if (body.compare("P") == 0)
	points = "2";
    else if (body.compare("R") == 0)
	points = "1";
    else if (body.compare("S") == 0)
	points = "1";
    else if (body.compare(QTableView::trUtf8("Ś")) == 0)
	points = "5";
    else if (body.compare("T") == 0)
	points = "2";
    else if (body.compare("U") == 0)
	points = "3";
    else if (body.compare("W") == 0)
	points = "1";
    else if (body.compare("X") == 0)
	points = "6";
    else if (body.compare("Y") == 0)
	points = "2";
    else if (body.compare("Z") == 0)
	points = "1";
    else if (body.compare(QTableView::trUtf8("Ź")) == 0)
	points = "9";
    else if (body.compare(QTableView::trUtf8("Ż")) == 0)
	points = "5";
    else if (body.compare("Space") == 0)
	points = "0";
}

void Letter::setBody(QString letter)
{
    body = letter;
}

QString Letter::getBody()
{
    return body;
}

void Letter::setPoints(QString aPoints)
{
    points = aPoints;
}

QString Letter::getPoints()
{
    return points;
}
