
M
Mini_Projet_Datametrie
Private
Add license
Project ID: 8589529
0
HTTPS
Leave project
The repository for this project is empty

If you already have files you can push them using the command line instructions below.

Note that the master branch is automatically protected. Learn more about protected branches

You can automatically build and test your application if you enable Auto DevOps for this project. You can automatically deploy it as well, if you add a Kubernetes cluster.

Otherwise it is recommended you start with one of the options below.

    Files (0 Bytes)
    Commits (0)
    Branches (0)
    Tags (0)
    Auto DevOps enabled

    New file
    Add Readme
    Add Kubernetes cluster

Command line instructions
Git global setup

git config --global user.name "Simon Monnier"
git config --global user.email "s.monnier44440@gmail.com"

Create a new repository

git clone https://gitlab.com/jguerard44/mini_projet.git
cd mini_projet
touch README.md
git add README.md
git commit -m "add README"
git push -u origin master

Existing folder

cd existing_folder
git init
git remote add origin https://gitlab.com/jguerard44/mini_projet.git
git add .
git commit -m "Initial commit"
git push -u origin master

Existing Git repository

cd existing_repo
git remote rename origin old-origin
git remote add origin https://gitlab.com/jguerard44/mini_projet.git
git push -u origin --all
git push -u origin --tags

