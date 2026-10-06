# Instructions

Update this document where indicated [look for the brackets!]. Replace text inside the brackets with your own information. For example: Course Name should be the name of this course, and not the generic words "Course Name".

<br>

## [ COS119-O Project & Portfolio 1: Computer Science ]

- **[ Jazelle Lewin]**
- **[ Oct 4, 20206 ]**

This paper addresses some of the topic matter covered in research and activity this week. Be sure to include reference links below to the research and information you used to complete this assignment.

## Topic: Terminal

Professional developers use Terminal daily. It's essential to understand some fundamental commands to use the application.

Update the information below to demonstrate your knowledge on this topic.

**1. Using Terminal, there are essential commands to know.**

List the correct Terminal commands to do the actions listed below. Replace **CMD** with the correct command sequence. You can keep or enhance the brief description.

**The last bullet provides an example**.

- [ cls ]: Clear the Screen
- [ get-location]: Print the "Working Directory"
- [ get-childitem]: List files and folders
- [ get-childitem -force ]: List files and folders, including invisible files
- [ get-childitem | format-table ]: List all files and folders, in human readable form
- [ set-location path / cd ]: Change directory
- [ set-location \ / cd \ ]: Change directory, go to root directory
- [ set-location / cd $HOME]: Change directory and go to user home directory
- [ set-location/cd . . ]: Change directory, go up one folder level
- [ set-location/cd ../.. ]: Change directory, go up two folder levels
- [ set-location/cd $HOME\desktop ]: Change directory to my desktop!

**2. Using Terminal...**

**Folder Drop:** Try typing "cd" followed by a space, and then drag a folder into terminal and press return. Test this out and describe your results below.

[ cd folder drop is similar to a file drop upload feature on a platform, it shows the full folder path beside cd.]

## Topic: Version Control & Git

Version control, also known as revision control, records changes to a file or set of files over time so that you can recall specific versions later. In this class, we are learning Git. Update the information below where indicated.

**1. There are three types of version control.**

[ Local that is stored on user's own computer, centralized the history stored on a central server, distributed where more than 1 user has copy of repository and it's history]

**2. Using Terminal, there are also essential Git commands to know.**

List the correct Git commands to do the actions listed below in Terminal. Replace CMD with the correct command and keep or enhance the brief description.

- [ git clone foldername ]: Clone a repository
- [ git config ]: Set-up a global user name
- [ git config]: Set-up a global email address (to match my GitHub account email)
- [ git status ]: Shows the current state of your directory and staging area
- [ git add . ]: Add modified files to the next commit
- [ git commit -m ]: Make a commit with a new message
- [ git log ]: Show my commit history
- [ git help /--help ]: Show Git's help screen

**3. Connecting to GitHub using Terminal.**
HTTPS is the the correct way to connect to GitHub in this course. Describe how you connect to GitHub from Terminal using this protocol. What steps do you take?

[ git - clone url from terminal automatically downloads and adds the cloned repo into the local computer ]

**4. Using .gitignore and Why it's Important**  
Most repositories contain a .gitignore file.

- What is the purpose of this file?
  <br>
  [this is important to ignore/skip selective sensitive files and secrets]

- What is the "**.DS_Store**" file and why would you want to ignore it?
  <br>
  [its the transfer from mac to windows files should be ignored because it stores folder view sets that is not relevant to git process]

- What other file or folder would you want to add to a .gitignore file and why?
  <br>
  [version control, and other files added that may have additional settings or information]

<br>

# Reference Links

Replace the example references below with your own links and recommended resources. It is acceptable to provide multiple links for a single topic and to use material provided to you in this class. You are encouraged to link to your own independent research as well.

[ Research Summary: What resource(s) did you find most helpful this past week and why? ]

**Terminal Commands**  
[Site Address][[Windows Terminal command line arguments | Microsoft Learn](https://learn.microsoft.com/en-us/windows/terminal/command-line-arguments?tabs=windows)

**Three Types of Version Control**  
[Site Address][[Version Control Systems - GeeksforGeeks](https://www.geeksforgeeks.org/git/version-control-systems/)

**Git Commands**  : Git Cheat Sheet git-scm
[Site Address]([Git Cheat Sheet](https://git-scm.com/cheat-sheet)

**Connecting to GitHub using Terminal**  : Github Docs
[Site Address]([Set up Git - GitHub Docs](https://docs.github.com/en/get-started/git-basics/set-up-git))

**Using .gitignore and Why it's Important**  Github Docs Ignoring files
[Site Address]([Ignoring files - GitHub Docs](https://docs.github.com/en/get-started/git-basics/ignoring-files))
