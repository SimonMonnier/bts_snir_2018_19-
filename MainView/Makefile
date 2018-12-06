##############################################################################
# Makefile pour generer : nom de l'application
# Projet Qt : nom du projet
# Date : 
# Commande : make
#############################################################################

# Dossier pour les fichiers sources
SRCDIR = Classes

# Dossier pour les compilations
BUILDDIR = build

# Dossier pour les fichiers objets (.o)
OBJDIR = $(BUILDDIR)/.obj

# Dossier pour les exécutables de test unitaire
UNITTESTDIR = $(BUILDDIR)/UnitTest
UNITTESTBIN = $(UNITTESTDIR)/bin

# Dossier pour les exécutable des releases
RELEASEDIR = $(BUILDDIR)/Release
RELEASEBIN = $(RELEASEDIR)/bin

# Dossier de la documentation
DOCDIR = $(BUILDDIR)/html

# Dossier d'installation
INSTALLDIR = ~/bin

# Dossier des moc (Qt)
MOCDIR = $(BUILDDIR)/.moc
#
# Dossier des ihm (Qt)
UIDIR = $(BUILDDIR)/.ui
#
# Dossier des ressources ihm (Qt)
RESOURCESDIR = Resources

# Commandes Qt
QTDIR = /usr/lib/x86_64-linux-gnu/qt4
MOC      = $(QTDIR)/bin/moc
UIC      = $(QTDIR)/bin/uic
RCC = $(QTDIR)/bin/rcc

# Bibliothèques Qt
QTLIBS = /usr/lib/x86_64-linux-gnu


# Options de compilation à ajouter à CFLAGS si nécessaire
SVNDEF = -D_SVN_=\"$(shell svnversion -n .)\"

DAYOFWEEKDEF = -D_DAYOFWEEK_=\"$(shell date +%a)\"
DAYDEF = -D_DAY_=\"$(shell date +%d)\"
MONTHDEF = -D_MONTH_=\"$(shell date +%m)\"
YEARDEF = -D_YEAR_=\"$(shell date +%y)\"
HOURDEF = -D_HOUR_=\"$(shell date +%H)\"
MINDEF = -D_MIN_=\"$(shell date +%M)\"

DEBUG_ON = -g
WARNING_ON = -Wall

CFLAGS = $(DEBUG_ON) $(WARNING_ON)

# Options de recherches des includes
INCLUDES =	-I /usr/include \
		-I /usr/include/qt4 \
		-I /usr/include/qt4/QtCore \
		-I /usr/include/qt4/QtGui \

# Définitions à la compilation (ex -DDEBUG = #define DEBUG)
DEFINES = 

# Options de linkage si necessaire (ex -lm)
LIBSTEST = -lcppunit -ldl $(QTLIBS)/libQtCore.so $(QTLIBS)/libQtGui.so
LIBS = $(QTLIBS)/libQtCore.so $(QTLIBS)/libQtGui.so

# Commande de compilation C++
CC = g++ $(CFLAGS) $(INCLUDES) $(DEFINES)

# Commande de compilation C
C = gcc $(CFLAGS) $(INCLUDES) $(DEFINES)

# Liste fichiers source
SRC = $(wildcard $(SRCDIR)/*.m)
HDR = $(wildcard $(SRCDIR)/*.h)

# On place ici les objets (.o) a linker dans les applications finales

# Classes MetaObject moc (Qt) 
 # ex 			= $(MOCDIR)/moc_MyView.cpp
MOC_SRC 		= $(MOCDIR)/moc_MainView.cpp\

# Fichiers de déclaration des classes IHM générées à partir de QtDesigner  (Qt)
# ex  			= $(SRCDIR)/ui_MyView.h 
UI_HEADERS 		=  $(SRCDIR)/ui_MainView.h

# Fichier ressources (Qt)
# ex 			= $(UIDIR)/qrc_imageslib.cpp 
QRC 			=

# Objets IHM (Qt)
# ex 			= $(OBJDIR)/MyView.o $(OBJDIR)/moc_MyView.o \
UI_OBJECTS      	=

# Classes auxiliaires
# ex                    = $(OBJDIR)/MyAuxClass.o
AUX_OBJECTS		=	$(OBJDIR)/MainView.o\
					$(OBJDIR)/moc_AsyncDataSource.o\
					$(OBJDIR)/AsyncDataSource.o\
					$(OBJDIR)/AppModel.o\
					$(OBJDIR)/moc_MainView.o\
					$(OBJDIR)/moc_AppModel.o\

# Classes de tests unitaires
# ex                    = $(OBJDIR)/MyAuxClassTest.o 
UNITTEST_OBJECTS	=	$(OBJDIR)/MainViewTest.o\

# Classe principale de release
# ex                    = $(OBJDIR)/MyMainClass.o
RELEASE_OBJECTS		=

# Objet à générer
OBJECTS		= 	$(AUX_OBJECTS) $(UI_OBJECTS) $(MOC_OBJECTS) $(UNITTEST_OBJECTS) $(RELEASE_OBJECTS)

# On place ici les exécutables à générer (testsunitaires et release)
# ex            = 	$(UNITTESTBIN)/MyAuxClassTest
UNITTEST	=	$(UNITTESTBIN)/MainViewTest\

# ex            = 	$(RELEASEBIN)/MyMainClass
RELEASE		=	

# On rajoute ici ce qui doit être généré
all : $(BUILDDIR) $(UI_HEADERS) $(QRC) $(MOC_SRC) $(OBJECTS) $(RELEASE) $(UNITTEST)

# Cibles pour le nettoyage de la compilation
cleanall : clean

clean :
	@rm -f $(OBJDIR)/* $(DOCDIR)/* 

# Cible pour l'enchaînement des tests unitaires (à venir)
tests:	

# Cible pour l'analyse du code source (à venir)
analyze :

# Cible pour la génération de la documentation du code
doc:
	doxygen ./Doxyfile

# Install
install : $(INSTALLDIR)
	cp $(RELEASEBIN)/* $(INSTALLDIR)/.

# Install test
installtest : $(INSTALLDIR)
	cp $(UNITTESTBIN)/* $(INSTALLDIR)/.

# Production des .o (c++)
$(OBJDIR)/%.o :  $(SRCDIR)/%.cpp $(SRCDIR)/%.h
	$(CC) -c $< -o $@

# Production des .o si pas de .h (c++)
$(OBJDIR)/%.o :  $(SRCDIR)/%.cpp
	$(CC) -c $< -o $@


# Production des moc_xxx.o (Qt)
$(OBJDIR)/%.o : $(MOCDIR)/%.cpp
	$(CC) -c $< -o $@

# Production des qrcxxx.cpp (Qt)
$(UIDIR)/qrc_%.cpp :  $(RESOURCESDIR)/%.qrc
	$(RCC) -o $@ $<

# Production des ui_xxx.h (Qt)
$(SRCDIR)/ui_%.h : $(SRCDIR)/%.ui
	$(UIC) -o $@ $<

# Production des .o ihm (sans .h : ex qrc)
$(OBJDIR)/%.o : $(UIDIR)/%.cpp
	$(CC) -c $< -o $@

# Production des .o ihm (Qt)
$(OBJDIR)/%.o : $(SRCDIR)/%.cpp $(SRCDIR)/%.h $(SRCDIR)/ui_%.h
	$(CC) -c $< -o $@

# Production des .o ihm (Qt)
$(OBJDIR)/%.o : $(UIDIR)/%.cpp $(UIDIR)/%.h
	$(CC) -c $< -o $@

# Production des moc_*.cpp (Qt)
$(MOCDIR)/moc_%.cpp : $(SRCDIR)/%.h
	$(MOC) -o $(MOCDIR)/moc_$*.cpp $(SRCDIR)/$*.h

# Production des moc_*.cpp ihm (Qt)
$(MOCDIR)/moc_%.cpp : $(RESOURCESDIR)/%.h
	$(MOC) -o $(MOCDIR)/moc_$*.cpp $<

# Production des tests unitaires
$(UNITTESTBIN)/MyAuxClassTest :	$(AUX_OBJECTS) $(OBJDIR)/MyAuxClassTest.o
	$(CC) $^  $(LIBSTEST) -o $@
$(UNITTESTBIN)/MainViewTest :	$(AUX_OBJECTS) $(OBJDIR)/MainViewTest.o
	$(CC) $^  $(LIBSTEST) -o $@

# Production de la release
$(RELEASEBIN)/MyMainClass : $(AUX_OBJECTS) $(OBJDIR)/MyMainClass.o
	$(CC) $^ $(LIBS) -o $@

$(INSTALLDIR) :
	mkdir -p $@

# Création de l'arborescence pour le build
$(BUILDDIR):
	mkdir $@ && \
	mkdir $@/.obj && \
	mkdir $@/.moc && \
	mkdir $@/.ui && \
	mkdir $@/html && \
	mkdir $@/UnitTest && \
	mkdir $@/UnitTest/bin && \
	mkdir $@/UnitTest/configuration && \
	mkdir $@/UnitTest/logs && \
	mkdir $@/Release && \
	mkdir $@/Release/bin && \
	mkdir $@/Release/configuration && \
	mkdir $@/Release/logs
