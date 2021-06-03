#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/qpushbutton.h>
#include <QEvent>
#include <array>
#include <QMouseEvent>
#include <QtWidgets/QMainWindow>
#include "ui_ChessGUIV3.h"
#include "../GameEngine/Game.h"

class ChessGUIV3 : public QMainWindow
{
    Q_OBJECT

public:
    QIcon WRook;
    QIcon WBishop;
    QIcon WKnight;
    QIcon WKing;
    QIcon WPawn;
    QIcon WQueen;
    QIcon BRook;
    QIcon BBishop;
    QIcon BKnight;
    QIcon BKing;
    QIcon BPawn;
    QIcon BQueen;
    ChessGUIV3(QWidget* parent = Q_NULLPTR);
    void setup_figures();

private:
    Ui::ChessGUIV3Class ui;
    std::array<std::array <QPushButton*, 8>, 8> fields;
    Game game;
    QIcon choose_figure(std::string figure_type, int color);
};