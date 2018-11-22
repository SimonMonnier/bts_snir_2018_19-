##############################################################################
# Makefile pour generer : nom de l'application
# Projet : nom du projet
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
INCLUDES =	-I /usr/local/include

# Définitions à la compilation (ex -DDEBUG = #define DEBUG)
DEFINES = 

# Options de linkage si necessaire (ex -lm)
LIBSTEST = -lcppunit -ldl
LIBS = 

# Commande de compilation C++
CC = g++ $(CFLAGS) $(INCLUDES) $(DEFINES)

# Commande de compilation C
C = gcc $(CFLAGS) $(INCLUDES) $(DEFINES)

# Liste fichiers source
SRC = $(wildcard $(SRCDIR)/*.m)
HDR = $(wildcard $(SRCDIR)/*.h)

# On place ici les objets (.o) a linker dans les applications finales

# Classes auxiliaires
# ex                    = $(OBJDIR)/MyAuxClass.o
AUX_OBJECTS		=	

# Classes de tests unitaires
# ex                    = $(OBJDIR)/MyAuxClassTest.o 
UNITTEST_OBJECTS	=	

# Classe principale de release
# ex                    = $(OBJDIR)/MyMainClass.o
RELEASE_OBJECTS		=	$(OBJDIR)/ex1_6.o \

# Objet à générer
OBJECTS		= 	$(AUX_OBJECTS) $(UNITTEST_OBJECTS) $(RELEASE_OBJECTS)

# On place ici les exécutables à générer (testsunitaires et release)
# ex            = 	$(UNITTESTBIN)/MyAuxClassTest
UNITTEST	=

# ex            = 	$(RELEASEBIN)/MyMainClass
RELEASE		=	$(RELEASEBIN)/ex1_6 \

# On rajoute ici ce qui doit être généré
all : $(BUILDDIR) $(OBJECTS) $(RELEASE) $(UNITTEST)

# Cibles pour le nettoyage de la compilation
cleanall : clean
	@rm -f $(RELEASEBIN)/*

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

# Production des .o (c++)
$(OBJDIR)/%.o :  $(SRCDIR)/%.cpp $(SRCDIR)/%.h
	$(CC) -c $< -o $@

# Production des .o si pas de .h (c++)
$(OBJDIR)/%.o :  $(SRCDIR)/%.cpp
	$(CC) -c $< -o $@

# Production des tests unitaires
$(UNITTESTBIN)/MyAuxClassTest :	$(AUX_OBJECTS) $(OBJDIR)/MyAuxClassTest.o
	$(CC) $^  $(LIBSTEST) -o $@

# Production de la release
$(RELEASEBIN)/MyMainClass : $(AUX_OBJECTS) $(OBJDIR)/MyMainClass.o
	$(CC) $^ $(LIBS) -o $@
$(RELEASEBIN)/ex1_6 : $(AUX_OBJECTS) $(OBJDIR)/ex1_6.o
	$(CC) $^ $(LIBS) -o $@

$(INSTALLDIR) :
	mkdir -p $@

# Création de l'arborescence pour le build
$(BUILDDIR):
	mkdir $@ && \
	mkdir $@/.obj && \
	mkdir $@/html && \
	mkdir $@/UnitTest && \
	mkdir $@/UnitTest/bin && \
	mkdir $@/UnitTest/configuration && \
	mkdir $@/UnitTest/logs && \
	mkdir $@/Release && \
	mkdir $@/Release/bin && \
	mkdir $@/Release/configuration && \
	mkdir $@/Release/logs
