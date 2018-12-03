

#include <QApplication> 
#include <QWidget>
#include <QPushButton>
#include <QString>
#include "MyButton.h"

int main(int argc, char* argv[]) 
{ 
   QApplication app(argc, argv); 

   // déclaration d'un widget simple 
   QWidget *mainView = new QWidget(); 
   QPushButton *pbQuitter = new QPushButton("Quitter", mainView);
   // déclaration du nouveau bouton
   MyButton *myb = new MyButton("Docteur Jeckyl", mainView);
   // initialisation de paramètres du widget 
   mainView->setFixedSize(300,200);
   mainView->setWindowTitle("Hello Qt !"); 
   // le widget sera visible 
   mainView->show(); 
   pbQuitter->setGeometry(125, 170, 60, 30);
   myb->setGeometry(95, 70, 120, 30);
   mainView->connect(myb, SIGNAL(clicked()), &app, SLOT(quit()) );
   // Quand on clique sur le nouveau bouton , on change le texte de celui-ci
   mainView->connect(pbQuitter,SIGNAL(clicked()),myb,SLOT(slotChangeText()));
   return app.exec(); 
} 
