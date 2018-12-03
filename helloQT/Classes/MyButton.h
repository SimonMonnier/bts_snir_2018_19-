//*********************************************************************
// Fichier : MyButton.h
// Classe : MyButton
//*********************************************************************

#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QPushButton>

class MyButton : public QPushButton
{
    Q_OBJECT

    public:
        MyButton(const QString & text, QWidget *parent);
        virtual ~MyButton();

    public slots:
        void slotChangeText();

};
#endif // MYBUTTON_H
