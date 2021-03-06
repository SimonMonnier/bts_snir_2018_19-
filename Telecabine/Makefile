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
INSTALLDIR = /tmp/target/tmp/smonnier

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

CFLAGS = -m32 $(DEBUG_ON) $(WARNING_ON)

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
AUX_OBJECTS		= $(OBJDIR)/PortParallele.o\
			$(OBJDIR)/AlarmeSonore.o $(OBJDIR)/Afficheur.o\
			$(OBJDIR)/Portillon.o $(OBJDIR)/PresenceCabine.o\
			$(OBJDIR)/Tourniquet.o $(OBJDIR)/Gestionnaire.o

# Classes de tests unitaires
# ex                    = $(OBJDIR)/MyAuxClassTest.o 
UNITTEST_OBJECTS	= $(OBJDIR)/PortParalleleTest.o\
			$(OBJDIR)/AlarmeSonoreTest.o $(OBJDIR)/AfficheurTest.o\
			$(OBJDIR)/PortillonTest.o $(OBJDIR)/PresenceCabineTest.o\
			$(OBJDIR)/TourniquetTest.o $(OBJDIR)/GestionnaireTest.o

# Classe principale de release
# ex                    = $(OBJDIR)/MyMainClass.o
RELEASE_OBJECTS		=

# Objet à générer
OBJECTS		= 	$(AUX_OBJECTS) $(UNITTEST_OBJECTS) $(RELEASE_OBJECTS)

# On place ici les exécutables à générer (testsunitaires et release)
# ex            = 	$(UNITTESTBIN)/MyAuxClassTest
UNITTEST	= $(UNITTESTBIN)/PortParalleleTest\
		$(UNITTESTBIN)/AlarmeSonoreTest $(UNITTESTBIN)/AfficheurTest\
		$(UNITTESTBIN)/PortillonTest $(UNITTESTBIN)/PresenceCabineTest\
		$(UNITTESTBIN)/TourniquetTest $(UNITTESTBIN)/GestionnaireTest

# ex            = 	$(RELEASEBIN)/MyMainClass
RELEASE		=	

# On rajoute ici ce qui doit être généré
all : $(BUILDDIR) $(OBJECTS) $(RELEASE) $(UNITTEST)

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

# Production des tests unitaires
$(UNITTESTBIN)/MyAuxClassTest :	$(AUX_OBJECTS) $(OBJDIR)/MyAuxClassTest.o
	$(CC) $^  $(LIBSTEST) -o $@
$(UNITTESTBIN)/PortParalleleTest : $(AUX_OBJECTS) $(OBJDIR)/PortParalleleTest.o
	$(CC) $^  $(LIBSTEST) -o $@
$(UNITTESTBIN)/AlarmeSonoreTest : $(AUX_OBJECTS) $(OBJDIR)/AlarmeSonoreTest.o
	$(CC) $^  $(LIBSTEST) -o $@
$(UNITTESTBIN)/AfficheurTest : $(AUX_OBJECTS) $(OBJDIR)/AfficheurTest.o
	$(CC) $^  $(LIBSTEST) -o $@
$(UNITTESTBIN)/PortillonTest : $(AUX_OBJECTS) $(OBJDIR)/PortillonTest.o
	$(CC) $^  $(LIBSTEST) -o $@
$(UNITTESTBIN)/PresenceCabineTest : $(AUX_OBJECTS) $(OBJDIR)/PresenceCabineTest.o
	$(CC) $^  $(LIBSTEST) -o $@
$(UNITTESTBIN)/TourniquetTest : $(AUX_OBJECTS) $(OBJDIR)/TourniquetTest.o
	$(CC) $^  $(LIBSTEST) -o $@
$(UNITTESTBIN)/GestionnaireTest : $(AUX_OBJECTS) $(OBJDIR)/GestionnaireTest.o
	$(CC) $^  $(LIBSTEST) -o $@
# Production de la release
$(RELEASEBIN)/MyMainClass : $(AUX_OBJECTS) $(OBJDIR)/MyMainClass.o
	$(CC) $^ $(LIBS) -o $@
$(RELEASEBIN)/PortParallele : $(AUX_OBJECTS) $(OBJDIR)/PortParallele.o
	$(CC) $^ $(LIBS) -o $@
$(RELEASEBIN)/AlarmeSonore : $(AUX_OBJECTS) $(OBJDIR)/AlarmeSonore.o
	$(CC) $^ $(LIBS) -o $@
$(RELEASEBIN)/Afficheur : $(AUX_OBJECTS) $(OBJDIR)/Afficheur.o
	$(CC) $^ $(LIBS) -o $@
$(RELEASEBIN)/Portillon : $(AUX_OBJECTS) $(OBJDIR)/Portillon.o
	$(CC) $^ $(LIBS) -o $@
$(RELEASEBIN)/PresenceCabine : $(AUX_OBJECTS) $(OBJDIR)/PresenceCabine.o
	$(CC) $^ $(LIBS) -o $@
$(RELEASEBIN)/Tourniquet : $(AUX_OBJECTS) $(OBJDIR)/Tourniquet.o
	$(CC) $^ $(LIBS) -o $@
$(RELEASEBIN)/Gestionnaire : $(AUX_OBJECTS) $(OBJDIR)/Gestionnaire.o
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
