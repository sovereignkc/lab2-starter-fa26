Last login: Wed Sep 30 00:13:45 on ttys002
You have new mail.
kc@Kevlars-MacBook-Air ~ % ssh kechi@ieng6.ucsd.edu
kechi@ieng6.ucsd.edu's password: 

Last login: Tue Oct  6 17:20:31 2026 from 128.54.70.239
Hello kechi, you are currently logged into ieng6-201.ucsd.edu

You are using 0% CPU on this system

Cluster Status 
Hostname    Time    #Users  Load  Averages  
ieng6-201  17:45:01  45  0.85,  0.66,  0.55
ieng6-202  17:45:01  45  0.46,  0.48,  0.40
ieng6-203  17:45:01  47  0.26,  0.29,  0.27

 

To begin work for one of your courses [ CSE029_FA26_001 ], type its name 
at the command prompt.  (For example, "CSE029_FA26_001", without the quotes).

To see all available software packages, type "prep -l" at the command prompt,
or "prep -h" for more options.
[kechi@ieng6-201]:~:1$ ls
cse29  CSE29  CSE29.pub
[kechi@ieng6-201]:~:2$ cd CSE29
-bash: cd: CSE29: Not a directory
[kechi@ieng6-201]:~:3$ cd cse29
[kechi@ieng6-201]:cse29:4$ ls
lab1  lab2-starter-fa26  people
[kechi@ieng6-201]:cse29:5$ cp -r ../lab1/* .
cp: cannot stat '../lab1/*': No such file or directory
[kechi@ieng6-201]:cse29:6$ cp -r /lab1/* .
cp: cannot stat '/lab1/*': No such file or directory
[kechi@ieng6-201]:cse29:7$ cd -r lab1/* .
-bash: cd: -r: invalid option
cd: usage: cd [-L|[-P [-e]] [-@]] [dir]
[kechi@ieng6-201]:cse29:8$ cp -r /lab1/* .
cp: cannot stat '/lab1/*': No such file or directory
[kechi@ieng6-201]:cse29:9$ cp -r lab1 .
cp: 'lab1' and './lab1' are the same file
[kechi@ieng6-201]:cse29:10$ ls
lab1  lab2-starter-fa26  people
[kechi@ieng6-201]:cse29:11$ cp -r lab1 lab2-starter-fa26 .
cp: 'lab1' and './lab1' are the same file
cp: 'lab2-starter-fa26' and './lab2-starter-fa26' are the same file
[kechi@ieng6-201]:cse29:12$ cp -r lab1 lab2-starter-fa26
[kechi@ieng6-201]:cse29:13$ git status
fatal: not a git repository (or any parent up to mount point /home/linux)
Stopping at filesystem boundary (GIT_DISCOVERY_ACROSS_FILESYSTEM not set).
[kechi@ieng6-201]:cse29:14$ git add Books Music
fatal: not a git repository (or any parent up to mount point /home/linux)
Stopping at filesystem boundary (GIT_DISCOVERY_ACROSS_FILESYSTEM not set).
[kechi@ieng6-201]:cse29:15$ gi
gi: command not found
[kechi@ieng6-201]:cse29:16$ git
usage: git [-v | --version] [-h | --help] [-C <path>] [-c <name>=<value>]
           [--exec-path[=<path>]] [--html-path] [--man-path] [--info-path]
           [-p | --paginate | -P | --no-pager] [--no-replace-objects] [--bare]
           [--git-dir=<path>] [--work-tree=<path>] [--namespace=<name>]
           [--config-env=<name>=<envvar>] <command> [<args>]

These are common Git commands used in various situations:

start a working area (see also: git help tutorial)
   clone     Clone a repository into a new directory
   init      Create an empty Git repository or reinitialize an existing one

work on the current change (see also: git help everyday)
   add       Add file contents to the index
   mv        Move or rename a file, a directory, or a symlink
   restore   Restore working tree files
   rm        Remove files from the working tree and from the index

examine the history and state (see also: git help revisions)
   bisect    Use binary search to find the commit that introduced a bug
   diff      Show changes between commits, commit and working tree, etc
   grep      Print lines matching a pattern
   log       Show commit logs
   show      Show various types of objects
   status    Show the working tree status

grow, mark and tweak your common history
   branch    List, create, or delete branches
   commit    Record changes to the repository
   merge     Join two or more development histories together
   rebase    Reapply commits on top of another base tip
   reset     Reset current HEAD to the specified state
   switch    Switch branches
   tag       Create, list, delete or verify a tag object signed with GPG

collaborate (see also: git help workflows)
   fetch     Download objects and refs from another repository
   pull      Fetch from and integrate with another repository or a local branch
   push      Update remote refs along with associated objects

'git help -a' and 'git help -g' list available subcommands and some
concept guides. See 'git help <command>' or 'git help <concept>'
to read about a specific subcommand or concept.
See 'git help git' for an overview of the system.
[kechi@ieng6-201]:cse29:17$ ls
lab1  lab2-starter-fa26  people
[kechi@ieng6-201]:cse29:18$ cd lab2-starter-fa26
[kechi@ieng6-201]:lab2-starter-fa26:19$ git status
On branch main
Your branch is up to date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	lab1/

nothing added to commit but untracked files present (use "git add" to track)
[kechi@ieng6-201]:lab2-starter-fa26:20$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:21$ git add Books Music
fatal: pathspec 'Books' did not match any files
[kechi@ieng6-201]:lab2-starter-fa26:22$ cd lab1
[kechi@ieng6-201]:lab1:23$ ls
Books  contains  contains.c  Music
[kechi@ieng6-201]:lab1:24$ git add Books Music
[kechi@ieng6-201]:lab1:25$ git commit -m "Added Books and Music two individual"
[main cd94c9f] Added Books and Music two individual
 Committer: Chi <kechi@ieng6-201.ucsd.edu>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 6 files changed, 0 insertions(+), 0 deletions(-)
 create mode 100644 lab1/Books/A biography of Albert Einstein.txt
 create mode 100644 lab1/Books/HarryPotter.txt
 create mode 100644 lab1/Books/HistoryNonfictionStories.txt
 create mode 100644 lab1/Books/PercyJackson.txt
 create mode 100644 lab1/Music/OblivionLoveHarder.mp3
 create mode 100644 lab1/Music/RoyaltyEzgodMaestro.mp3
[kechi@ieng6-201]:lab1:26$ git push origin main
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 16 threads
Compressing objects: 100% (5/5), done.
Writing objects: 100% (6/6), 561 bytes | 80.00 KiB/s, done.
Total 6 (delta 1), reused 1 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To github.com:sovereignkc/lab2-starter-fa26.git
   acbae16..cd94c9f  main -> main
[kechi@ieng6-201]:lab1:27$ git log
commit cd94c9fb04fe4fc591c0acbbf4f26f36132fbb80 (HEAD -> main, origin/main, origin/HEAD)
Author: Chi <kechi@ieng6-201.ucsd.edu>
Date:   Tue Oct 6 17:51:17 2026 -0700

    Added Books and Music two individual

commit acbae160069c8577a146a03fb47e117e01a04ea2
Author: Tomson <etomson@ieng6-202.ucsd.edu>
Date:   Mon Oct 5 14:36:39 2026 -0700

    bitstrings.c added

commit c1c931827ce6d6c7eb1baeb12e607d8de26a730d
Author: Tomson <etomson@ieng6-201.ucsd.edu>
Date:   Sun Oct 4 18:01:09 2026 -0700

    README no classroom

commit fa1d7037cce931ab49d19513a12151e7d3cc106d
Author: Tomson <etomson@ieng6-201.ucsd.edu>
Date:   Thu Apr 9 15:13:31 2026 -0700

:
























commit cd94c9fb04fe4fc591c0acbbf4f26f36132fbb80 (HEAD -> main, origin/main, origin/HEAD)
commit cd94c9fb04fe4fc591c0acbbf4f26f36132fbb80 (HEAD -> main, origin/main, orig
in/HEAD)
Author: Chi <kechi@ieng6-201.ucsd.edu>
Date:   Tue Oct 6 17:51:17 2026 -0700

    Added Books and Music two individual

commit acbae160069c8577a146a03fb47e117e01a04ea2
Author: Tomson <etomson@ieng6-202.ucsd.edu>
Date:   Mon Oct 5 14:36:39 2026 -0700

    bitstrings.c added

commit c1c931827ce6d6c7eb1baeb12e607d8de26a730d
Author: Tomson <etomson@ieng6-201.ucsd.edu>
Date:   Sun Oct 4 18:01:09 2026 -0700

    README no classroom

commit fa1d7037cce931ab49d19513a12151e7d3cc106d
Author: Tomson <etomson@ieng6-201.ucsd.edu>
Date:   Thu Apr 9 15:13:31 2026 -0700


[kechi@ieng6-201]:lab1:28$ git log --name-status
commit cd94c9fb04fe4fc591c0acbbf4f26f36132fbb80 (HEAD -> main, origin/main, origin/HEAD)
Author: Chi <kechi@ieng6-201.ucsd.edu>
Date:   Tue Oct 6 17:51:17 2026 -0700

    Added Books and Music two individual

A       lab1/Books/A biography of Albert Einstein.txt
A       lab1/Books/HarryPotter.txt
A       lab1/Books/HistoryNonfictionStories.txt
A       lab1/Books/PercyJackson.txt
A       lab1/Music/OblivionLoveHarder.mp3
A       lab1/Music/RoyaltyEzgodMaestro.mp3

commit acbae160069c8577a146a03fb47e117e01a04ea2
Author: Tomson <etomson@ieng6-202.ucsd.edu>
Date:   Mon Oct 5 14:36:39 2026 -0700

    bitstrings.c added

A       bitstrings.c

commit c1c931827ce6d6c7eb1baeb12e607d8de26a730d
Author: Tomson <etomson@ieng6-201.ucsd.edu>
[kechi@ieng6-201]:lab1:29$ ls
Books  contains  contains.c  Music
[kechi@ieng6-201]:lab1:30$ p -r /home/linux/ieng6/CSE29_SP26_A00/public/people .
p: command not found
[kechi@ieng6-201]:lab1:31$ cp -r /home/linux/ieng6/CSE29_SP26_A00/public/people .
[kechi@ieng6-201]:lab1:32$ mkdir Students
[kechi@ieng6-201]:lab1:33$ ls
Books  contains  contains.c  Music  people  Students
[kechi@ieng6-201]:lab1:34$ cd people
[kechi@ieng6-201]:people:35$ ls
file.txt  Instructors  outline.md  TAs	Tutors
[kechi@ieng6-201]:people:36$ mkdir Students
[kechi@ieng6-201]:people:37$ mkdir Kevlar
[kechi@ieng6-201]:people:38$ cat data.md
cat: data.md: No such file or directory
[kechi@ieng6-201]:people:39$ touch data.md
[kechi@ieng6-201]:people:40$ cat data.md
[kechi@ieng6-201]:people:41$ vim data.md
[kechi@ieng6-201]:people:42$ git add data.md
[kechi@ieng6-201]:people:43$ git commit -m "Fun facts about KEvlar"
[main c3cf825] Fun facts about KEvlar
 Committer: Chi <kechi@ieng6-201.ucsd.edu>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 2 insertions(+)
 create mode 100644 lab1/people/data.md
[kechi@ieng6-201]:people:44$ git push
To github.com:sovereignkc/lab2-starter-fa26.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'github.com:sovereignkc/lab2-starter-fa26.git'
hint: Updates were rejected because the remote contains work that you do not
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
[kechi@ieng6-201]:people:45$ git pull
remote: Enumerating objects: 6, done.
remote: Counting objects: 100% (6/6), done.
remote: Compressing objects: 100% (5/5), done.
remote: Total 6 (delta 1), reused 6 (delta 1), pack-reused 0 (from 0)
Unpacking objects: 100% (6/6), 784 bytes | 28.00 KiB/s, done.
From github.com:sovereignkc/lab2-starter-fa26
   cd94c9f..3335e80  main       -> origin/main
hint: You have divergent branches and need to specify how to reconcile them.
hint: You can do so by running one of the following commands sometime before
hint: your next pull:
hint: 
hint:   git config pull.rebase false  # merge
hint:   git config pull.rebase true   # rebase
hint:   git config pull.ff only       # fast-forward only
hint: 
hint: You can replace "git config" with "git config --global" to set a default
hint: preference for all repositories. You can also pass --rebase, --no-rebase,
hint: or --ff-only on the command line to override the configured default per
hint: invocation.
fatal: Need to specify how to reconcile divergent branches.
[kechi@ieng6-201]:people:46$ ls
data.md  file.txt  Instructors	Kevlar	outline.md  Students  TAs  Tutors
[kechi@ieng6-201]:people:47$ git push origin main
To github.com:sovereignkc/lab2-starter-fa26.git
 ! [rejected]        main -> main (non-fast-forward)
error: failed to push some refs to 'github.com:sovereignkc/lab2-starter-fa26.git'
hint: Updates were rejected because the tip of your current branch is behind
hint: its remote counterpart. If you want to integrate the remote changes,
hint: use 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
[kechi@ieng6-201]:people:48$ cd ..
[kechi@ieng6-201]:lab1:49$ ls
Books  contains  contains.c  Music  people  Students
[kechi@ieng6-201]:lab1:50$ rm -r Students
[kechi@ieng6-201]:lab1:51$ git add .
[kechi@ieng6-201]:lab1:52$ git push origin main
To github.com:sovereignkc/lab2-starter-fa26.git
 ! [rejected]        main -> main (non-fast-forward)
error: failed to push some refs to 'github.com:sovereignkc/lab2-starter-fa26.git'
hint: Updates were rejected because the tip of your current branch is behind
hint: its remote counterpart. If you want to integrate the remote changes,
hint: use 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
[kechi@ieng6-201]:lab1:53$ git push
To github.com:sovereignkc/lab2-starter-fa26.git
 ! [rejected]        main -> main (non-fast-forward)
error: failed to push some refs to 'github.com:sovereignkc/lab2-starter-fa26.git'
hint: Updates were rejected because the tip of your current branch is behind
hint: its remote counterpart. If you want to integrate the remote changes,
hint: use 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
[kechi@ieng6-201]:lab1:54$ ls
Books  contains  contains.c  Music  people
[kechi@ieng6-201]:lab1:55$ cd people
[kechi@ieng6-201]:people:56$ ls
data.md  file.txt  Instructors	Kevlar	outline.md  Students  TAs  Tutors
[kechi@ieng6-201]:people:57$ cd Kevlar
[kechi@ieng6-201]:Kevlar:58$ ls
[kechi@ieng6-201]:Kevlar:59$ mv data.md Kevlar/
mv: cannot stat 'data.md': No such file or directory
[kechi@ieng6-201]:Kevlar:60$ mv data.md Kevlar
mv: cannot stat 'data.md': No such file or directory
[kechi@ieng6-201]:Kevlar:61$ ls
[kechi@ieng6-201]:Kevlar:62$ vim data.md
[kechi@ieng6-201]:Kevlar:63$ rm -r data.md
[kechi@ieng6-201]:Kevlar:64$ ls
[kechi@ieng6-201]:Kevlar:65$ cd ..
[kechi@ieng6-201]:people:66$ ls
data.md  file.txt  Instructors	Kevlar	outline.md  Students  TAs  Tutors
[kechi@ieng6-201]:people:67$ rm -r data.md
[kechi@ieng6-201]:people:68$ ls
file.txt  Instructors  Kevlar  outline.md  Students  TAs  Tutors
[kechi@ieng6-201]:people:69$ cd Kevlar
[kechi@ieng6-201]:Kevlar:70$ touch data.md
[kechi@ieng6-201]:Kevlar:71$ vim data.md
[kechi@ieng6-201]:Kevlar:72$ git add .
[kechi@ieng6-201]:Kevlar:73$ git push origin main
To github.com:sovereignkc/lab2-starter-fa26.git
 ! [rejected]        main -> main (non-fast-forward)
error: failed to push some refs to 'github.com:sovereignkc/lab2-starter-fa26.git'
hint: Updates were rejected because the tip of your current branch is behind
hint: its remote counterpart. If you want to integrate the remote changes,
hint: use 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
[kechi@ieng6-201]:Kevlar:74$ ls
data.md
[kechi@ieng6-201]:Kevlar:75$ cd ..
[kechi@ieng6-201]:people:76$ ls
file.txt  Instructors  Kevlar  outline.md  Students  TAs  Tutors
[kechi@ieng6-201]:people:77$ cd ..
[kechi@ieng6-201]:lab1:78$ ls
Books  contains  contains.c  Music  people
[kechi@ieng6-201]:lab1:79$ cd ..
[kechi@ieng6-201]:lab2-starter-fa26:80$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:81$ git pull
hint: You have divergent branches and need to specify how to reconcile them.
hint: You can do so by running one of the following commands sometime before
hint: your next pull:
hint: 
hint:   git config pull.rebase false  # merge
hint:   git config pull.rebase true   # rebase
hint:   git config pull.ff only       # fast-forward only
hint: 
hint: You can replace "git config" with "git config --global" to set a default
hint: preference for all repositories. You can also pass --rebase, --no-rebase,
hint: or --ff-only on the command line to override the configured default per
hint: invocation.
fatal: Need to specify how to reconcile divergent branches.
[kechi@ieng6-201]:lab2-starter-fa26:82$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:83$ git pull origin main
From github.com:sovereignkc/lab2-starter-fa26
 * branch            main       -> FETCH_HEAD
hint: You have divergent branches and need to specify how to reconcile them.
hint: You can do so by running one of the following commands sometime before
hint: your next pull:
hint: 
hint:   git config pull.rebase false  # merge
hint:   git config pull.rebase true   # rebase
hint:   git config pull.ff only       # fast-forward only
hint: 
hint: You can replace "git config" with "git config --global" to set a default
hint: preference for all repositories. You can also pass --rebase, --no-rebase,
hint: or --ff-only on the command line to override the configured default per
hint: invocation.
fatal: Need to specify how to reconcile divergent branches.
[kechi@ieng6-201]:lab2-starter-fa26:84$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:85$ git fetch origin main
From github.com:sovereignkc/lab2-starter-fa26
 * branch            main       -> FETCH_HEAD
[kechi@ieng6-201]:lab2-starter-fa26:86$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:87$ git fetch main
fatal: 'main' does not appear to be a git repository
fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.
[kechi@ieng6-201]:lab2-starter-fa26:88$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:89$ git config pull.rebase false
[kechi@ieng6-201]:lab2-starter-fa26:90$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:91$ git pull
error: Your local changes to the following files would be overwritten by merge:
  lab1/contains.c lab1/people/Kevlar/data.md lab1/people/TAs/Abijit/data.md lab1/people/TAs/Abijit/frozen-heart-8bite.mp4 lab1/people/TAs/Abijit/mistborn.txt lab1/people/TAs/Elena/Adrenaline.mp4 lab1/people/TAs/Elena/DeathCure.txt lab1/people/TAs/Elena/data.md lab1/people/TAs/Kevin/Of-Mice-and-Men.txt lab1/people/TAs/Kevin/Oh-Yeah-(Insert question mark).mp4 lab1/people/TAs/Kevin/data.md lab1/people/TAs/Nathan/data.md lab1/people/TAs/Nathan/to-kill-a-mockingbird-harper-lee.txt lab1/people/TAs/Nathan/walk-of-life-dire-straits.mp3 lab1/people/TAs/Sarah/cherry-wine-grent-perez.mp3 lab1/people/TAs/Sarah/data.md lab1/people/TAs/Sarah/hotel-on-the-corner-of-bitter-and-sweet.txt lab1/people/Tutors/Aidan/Life My Life by Aespa.mp4 lab1/people/Tutors/Aidan/The Defining Decade.txt lab1/people/Tutors/Aidan/data.md lab1/people/Tutors/Andy/cherry flavoured love inside your heart.mp4 lab1/people/Tutors/Andy/data.md lab1/people/Tutors/Andy/the catcher in the rye.txt lab1/people/Tutors/Deven/Book of the New Sun.txt lab1/people/Tutors/Deven/Exit Music.mp4 lab1/people/Tutors/Deven/data.md lab1/people/Tutors/Gogo/Let Me Down Slowly.mp4 lab1/people/Tutors/Gogo/The Handmaid's Tale.txt lab1/people/Tutors/Gogo/data.md lab1/people/Tutors/Harsha/Blue Valentine.mp3 lab1/people/Tutors/Harsha/Born a Crime.txt lab1/people/Tutors/Harsha/Parasite.mp4 lab1/people/Tutors/Harsha/data.md lab1/people/Tutors/Jinchen/A Moment Apart.mp4 lab1/people/Tutors/Jinchen/The Three-Body Problem.txt lab1/people/Tutors/Jinchen/data.md lab1/people/Tutors/Khoa/Sad Cypress by Agatha Christie.txt lab1/people/Tutors/Khoa/This Love by Maroon 5.mp4 lab1/people/Tutors/Khoa/data.md lab1/people/Tutors/Kyra/Famous Last Words.mp4 lab1/people/Tutors/Kyra/The Giver.txt lab1/people/Tutors/Kyra/data.md lab1/people/Tutors/Miles/Dreams Don't Stop.mp4 lab1/people/Tutors/Miles/The Alchemist.txt lab1/people/Tutors/Miles/data.md lab1/people/Tutors/Sahil/Future Starts Slow.mp4 lab1/people/Tutors/Sahil/The Firm.txt lab1/people/Tutors/Sahil/data.md lab1/people/file.txt lab1/people/outline.md
<stdin>:16: trailing whitespace.
   } 
<stdin>:46: trailing whitespace.
# Abijit Jayachandran 
<stdin>:47: trailing whitespace.
* Role: TA  
<stdin>:52: trailing whitespace.
Favorite CSE29 topic: Anything to do with pointers  
<stdin>:55: trailing whitespace.
Favorite food: *Kerala-style Indian Chicken Curry*  
warning: squelched 118 whitespace errors
warning: 123 lines add whitespace errors.
Merge with strategy ort failed.
[kechi@ieng6-201]:lab2-starter-fa26:92$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:93$ git pull
error: Your local changes to the following files would be overwritten by merge:
  lab1/contains.c lab1/people/Kevlar/data.md lab1/people/TAs/Abijit/data.md lab1/people/TAs/Abijit/frozen-heart-8bite.mp4 lab1/people/TAs/Abijit/mistborn.txt lab1/people/TAs/Elena/Adrenaline.mp4 lab1/people/TAs/Elena/DeathCure.txt lab1/people/TAs/Elena/data.md lab1/people/TAs/Kevin/Of-Mice-and-Men.txt lab1/people/TAs/Kevin/Oh-Yeah-(Insert question mark).mp4 lab1/people/TAs/Kevin/data.md lab1/people/TAs/Nathan/data.md lab1/people/TAs/Nathan/to-kill-a-mockingbird-harper-lee.txt lab1/people/TAs/Nathan/walk-of-life-dire-straits.mp3 lab1/people/TAs/Sarah/cherry-wine-grent-perez.mp3 lab1/people/TAs/Sarah/data.md lab1/people/TAs/Sarah/hotel-on-the-corner-of-bitter-and-sweet.txt lab1/people/Tutors/Aidan/Life My Life by Aespa.mp4 lab1/people/Tutors/Aidan/The Defining Decade.txt lab1/people/Tutors/Aidan/data.md lab1/people/Tutors/Andy/cherry flavoured love inside your heart.mp4 lab1/people/Tutors/Andy/data.md lab1/people/Tutors/Andy/the catcher in the rye.txt lab1/people/Tutors/Deven/Book of the New Sun.txt lab1/people/Tutors/Deven/Exit Music.mp4 lab1/people/Tutors/Deven/data.md lab1/people/Tutors/Gogo/Let Me Down Slowly.mp4 lab1/people/Tutors/Gogo/The Handmaid's Tale.txt lab1/people/Tutors/Gogo/data.md lab1/people/Tutors/Harsha/Blue Valentine.mp3 lab1/people/Tutors/Harsha/Born a Crime.txt lab1/people/Tutors/Harsha/Parasite.mp4 lab1/people/Tutors/Harsha/data.md lab1/people/Tutors/Jinchen/A Moment Apart.mp4 lab1/people/Tutors/Jinchen/The Three-Body Problem.txt lab1/people/Tutors/Jinchen/data.md lab1/people/Tutors/Khoa/Sad Cypress by Agatha Christie.txt lab1/people/Tutors/Khoa/This Love by Maroon 5.mp4 lab1/people/Tutors/Khoa/data.md lab1/people/Tutors/Kyra/Famous Last Words.mp4 lab1/people/Tutors/Kyra/The Giver.txt lab1/people/Tutors/Kyra/data.md lab1/people/Tutors/Miles/Dreams Don't Stop.mp4 lab1/people/Tutors/Miles/The Alchemist.txt lab1/people/Tutors/Miles/data.md lab1/people/Tutors/Sahil/Future Starts Slow.mp4 lab1/people/Tutors/Sahil/The Firm.txt lab1/people/Tutors/Sahil/data.md lab1/people/file.txt lab1/people/outline.md
<stdin>:16: trailing whitespace.
   } 
<stdin>:46: trailing whitespace.
# Abijit Jayachandran 
<stdin>:47: trailing whitespace.
* Role: TA  
<stdin>:52: trailing whitespace.
Favorite CSE29 topic: Anything to do with pointers  
<stdin>:55: trailing whitespace.
Favorite food: *Kerala-style Indian Chicken Curry*  
warning: squelched 118 whitespace errors
warning: 123 lines add whitespace errors.
Merge with strategy ort failed.
[kechi@ieng6-201]:lab2-starter-fa26:94$ ;s
-bash: syntax error near unexpected token `;'
[kechi@ieng6-201]:lab2-starter-fa26:95$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:96$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:97$ cd lab1
[kechi@ieng6-201]:lab1:98$ ls
Books  contains  contains.c  Music  people
[kechi@ieng6-201]:lab1:99$ rm -r people
[kechi@ieng6-201]:lab1:100$ git pull
error: Your local changes to the following files would be overwritten by merge:
  lab1/contains.c lab1/people/Kevlar/data.md lab1/people/TAs/Abijit/data.md lab1/people/TAs/Abijit/frozen-heart-8bite.mp4 lab1/people/TAs/Abijit/mistborn.txt lab1/people/TAs/Elena/Adrenaline.mp4 lab1/people/TAs/Elena/DeathCure.txt lab1/people/TAs/Elena/data.md lab1/people/TAs/Kevin/Of-Mice-and-Men.txt lab1/people/TAs/Kevin/Oh-Yeah-(Insert question mark).mp4 lab1/people/TAs/Kevin/data.md lab1/people/TAs/Nathan/data.md lab1/people/TAs/Nathan/to-kill-a-mockingbird-harper-lee.txt lab1/people/TAs/Nathan/walk-of-life-dire-straits.mp3 lab1/people/TAs/Sarah/cherry-wine-grent-perez.mp3 lab1/people/TAs/Sarah/data.md lab1/people/TAs/Sarah/hotel-on-the-corner-of-bitter-and-sweet.txt lab1/people/Tutors/Aidan/Life My Life by Aespa.mp4 lab1/people/Tutors/Aidan/The Defining Decade.txt lab1/people/Tutors/Aidan/data.md lab1/people/Tutors/Andy/cherry flavoured love inside your heart.mp4 lab1/people/Tutors/Andy/data.md lab1/people/Tutors/Andy/the catcher in the rye.txt lab1/people/Tutors/Deven/Book of the New Sun.txt lab1/people/Tutors/Deven/Exit Music.mp4 lab1/people/Tutors/Deven/data.md lab1/people/Tutors/Gogo/Let Me Down Slowly.mp4 lab1/people/Tutors/Gogo/The Handmaid's Tale.txt lab1/people/Tutors/Gogo/data.md lab1/people/Tutors/Harsha/Blue Valentine.mp3 lab1/people/Tutors/Harsha/Born a Crime.txt lab1/people/Tutors/Harsha/Parasite.mp4 lab1/people/Tutors/Harsha/data.md lab1/people/Tutors/Jinchen/A Moment Apart.mp4 lab1/people/Tutors/Jinchen/The Three-Body Problem.txt lab1/people/Tutors/Jinchen/data.md lab1/people/Tutors/Khoa/Sad Cypress by Agatha Christie.txt lab1/people/Tutors/Khoa/This Love by Maroon 5.mp4 lab1/people/Tutors/Khoa/data.md lab1/people/Tutors/Kyra/Famous Last Words.mp4 lab1/people/Tutors/Kyra/The Giver.txt lab1/people/Tutors/Kyra/data.md lab1/people/Tutors/Miles/Dreams Don't Stop.mp4 lab1/people/Tutors/Miles/The Alchemist.txt lab1/people/Tutors/Miles/data.md lab1/people/Tutors/Sahil/Future Starts Slow.mp4 lab1/people/Tutors/Sahil/The Firm.txt lab1/people/Tutors/Sahil/data.md lab1/people/file.txt lab1/people/outline.md
<stdin>:16: trailing whitespace.
   } 
<stdin>:46: trailing whitespace.
# Abijit Jayachandran 
<stdin>:47: trailing whitespace.
* Role: TA  
<stdin>:52: trailing whitespace.
Favorite CSE29 topic: Anything to do with pointers  
<stdin>:55: trailing whitespace.
Favorite food: *Kerala-style Indian Chicken Curry*  
warning: squelched 118 whitespace errors
warning: 123 lines add whitespace errors.
Merge with strategy ort failed.
[kechi@ieng6-201]:lab1:101$ ls
Books  contains  contains.c  Music  people
[kechi@ieng6-201]:lab1:102$ cd ..
[kechi@ieng6-201]:lab2-starter-fa26:103$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:104$ rm -r people
rm: cannot remove 'people': No such file or directory
[kechi@ieng6-201]:lab2-starter-fa26:105$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:106$ cd lab1
[kechi@ieng6-201]:lab1:107$ ls
Books  contains  contains.c  Music  people
[kechi@ieng6-201]:lab1:108$ rm -r people
[kechi@ieng6-201]:lab1:109$ ls
Books  contains  contains.c  Music
[kechi@ieng6-201]:lab1:110$ cd ..
[kechi@ieng6-201]:lab2-starter-fa26:111$ git pull
error: Your local changes to the following files would be overwritten by merge:
  lab1/contains.c lab1/people/Kevlar/data.md lab1/people/TAs/Abijit/data.md lab1/people/TAs/Abijit/frozen-heart-8bite.mp4 lab1/people/TAs/Abijit/mistborn.txt lab1/people/TAs/Elena/Adrenaline.mp4 lab1/people/TAs/Elena/DeathCure.txt lab1/people/TAs/Elena/data.md lab1/people/TAs/Kevin/Of-Mice-and-Men.txt lab1/people/TAs/Kevin/Oh-Yeah-(Insert question mark).mp4 lab1/people/TAs/Kevin/data.md lab1/people/TAs/Nathan/data.md lab1/people/TAs/Nathan/to-kill-a-mockingbird-harper-lee.txt lab1/people/TAs/Nathan/walk-of-life-dire-straits.mp3 lab1/people/TAs/Sarah/cherry-wine-grent-perez.mp3 lab1/people/TAs/Sarah/data.md lab1/people/TAs/Sarah/hotel-on-the-corner-of-bitter-and-sweet.txt lab1/people/Tutors/Aidan/Life My Life by Aespa.mp4 lab1/people/Tutors/Aidan/The Defining Decade.txt lab1/people/Tutors/Aidan/data.md lab1/people/Tutors/Andy/cherry flavoured love inside your heart.mp4 lab1/people/Tutors/Andy/data.md lab1/people/Tutors/Andy/the catcher in the rye.txt lab1/people/Tutors/Deven/Book of the New Sun.txt lab1/people/Tutors/Deven/Exit Music.mp4 lab1/people/Tutors/Deven/data.md lab1/people/Tutors/Gogo/Let Me Down Slowly.mp4 lab1/people/Tutors/Gogo/The Handmaid's Tale.txt lab1/people/Tutors/Gogo/data.md lab1/people/Tutors/Harsha/Blue Valentine.mp3 lab1/people/Tutors/Harsha/Born a Crime.txt lab1/people/Tutors/Harsha/Parasite.mp4 lab1/people/Tutors/Harsha/data.md lab1/people/Tutors/Jinchen/A Moment Apart.mp4 lab1/people/Tutors/Jinchen/The Three-Body Problem.txt lab1/people/Tutors/Jinchen/data.md lab1/people/Tutors/Khoa/Sad Cypress by Agatha Christie.txt lab1/people/Tutors/Khoa/This Love by Maroon 5.mp4 lab1/people/Tutors/Khoa/data.md lab1/people/Tutors/Kyra/Famous Last Words.mp4 lab1/people/Tutors/Kyra/The Giver.txt lab1/people/Tutors/Kyra/data.md lab1/people/Tutors/Miles/Dreams Don't Stop.mp4 lab1/people/Tutors/Miles/The Alchemist.txt lab1/people/Tutors/Miles/data.md lab1/people/Tutors/Sahil/Future Starts Slow.mp4 lab1/people/Tutors/Sahil/The Firm.txt lab1/people/Tutors/Sahil/data.md lab1/people/file.txt lab1/people/outline.md
<stdin>:16: trailing whitespace.
   } 
<stdin>:46: trailing whitespace.
# Abijit Jayachandran 
<stdin>:47: trailing whitespace.
* Role: TA  
<stdin>:52: trailing whitespace.
Favorite CSE29 topic: Anything to do with pointers  
<stdin>:55: trailing whitespace.
Favorite food: *Kerala-style Indian Chicken Curry*  
warning: squelched 118 whitespace errors
warning: 123 lines add whitespace errors.
Merge with strategy ort failed.
[kechi@ieng6-201]:lab2-starter-fa26:112$ ls
bitstrings.c  lab1  README.md
[kechi@ieng6-201]:lab2-starter-fa26:113$ cd ..
[kechi@ieng6-201]:cse29:114$ ls
lab1  lab2-starter-fa26  people
[kechi@ieng6-201]:cse29:115$ git clone git@github.com:sovereignkc/lab2-starter-fa26.git
fatal: destination path 'lab2-starter-fa26' already exists and is not an empty directory.
[kechi@ieng6-201]:cse29:116$ mv lab2-starter-fa26 lab2/old
mv: cannot move 'lab2-starter-fa26' to 'lab2/old': No such file or directory
[kechi@ieng6-201]:cse29:117$ mkdir lab2/old
mkdir: cannot create directory ‘lab2/old’: No such file or directory
[kechi@ieng6-201]:cse29:118$ mv lab2-starer-fa26 lab2-old
mv: cannot stat 'lab2-starer-fa26': No such file or directory
[kechi@ieng6-201]:cse29:119$ mkdir lab2-starter-fa26 lab2-old
mkdir: cannot create directory ‘lab2-starter-fa26’: File exists
[kechi@ieng6-201]:cse29:120$ mv lab2-starter-fa26 lab2-old
[kechi@ieng6-201]:cse29:121$ ls
lab1  lab2-old	people
[kechi@ieng6-201]:cse29:122$ git clone git@github.com:sovereignkc/lab2-starter-fa26.git
Cloning into 'lab2-starter-fa26'...
remote: Enumerating objects: 62, done.
remote: Counting objects: 100% (10/10), done.
remote: Compressing objects: 100% (9/9), done.
remote: Total 62 (delta 2), reused 1 (delta 1), pack-reused 52 (from 2)
Receiving objects: 100% (62/62), 9.94 KiB | 339.00 KiB/s, done.
Resolving deltas: 100% (5/5), done.
[kechi@ieng6-201]:cse29:123$ ls
lab1  lab2-old	lab2-starter-fa26  people
[kechi@ieng6-201]:cse29:124$ cd lab2-starter-fa26
[kechi@ieng6-201]:lab2-starter-fa26:125$ ls
bitstrings.c  Books  lab1  Music  README.md
[kechi@ieng6-201]:lab2-starter-fa26:126$ cd lab1
[kechi@ieng6-201]:lab1:127$ ls
Books  Music
[kechi@ieng6-201]:lab1:128$ cd ..
[kechi@ieng6-201]:lab2-starter-fa26:129$ cp -r /home/linux/ieng6/CSE29_SP26_A00/public/people .
[kechi@ieng6-201]:lab2-starter-fa26:130$ ls
bitstrings.c  Books  lab1  Music  people  README.md
[kechi@ieng6-201]:lab2-starter-fa26:131$ cd people
[kechi@ieng6-201]:people:132$ mkdir Students
[kechi@ieng6-201]:people:133$ cd Students
[kechi@ieng6-201]:Students:134$ mkdir Kevlar
[kechi@ieng6-201]:Students:135$ touch data.md
[kechi@ieng6-201]:Students:136$ vim data.md
[kechi@ieng6-201]:Students:137$ git push
Everything up-to-date
[kechi@ieng6-201]:Students:138$ git add data.md
[kechi@ieng6-201]:Students:139$ git push 
Everything up-to-date
[kechi@ieng6-201]:Students:140$ ls
data.md  Kevlar
[kechi@ieng6-201]:Students:141$ cd ..
[kechi@ieng6-201]:people:142$ cd ..
[kechi@ieng6-201]:lab2-starter-fa26:143$ ls
bitstrings.c  Books  lab1  Music  people  README.md
[kechi@ieng6-201]:lab2-starter-fa26:144$ cd lab1
[kechi@ieng6-201]:lab1:145$ cd people
-bash: cd: people: No such file or directory
[kechi@ieng6-201]:lab1:146$ ls
Books  Music
[kechi@ieng6-201]:lab1:147$ cd ..
[kechi@ieng6-201]:lab2-starter-fa26:148$ cd people
[kechi@ieng6-201]:people:149$ ls
file.txt  Instructors  outline.md  Students  TAs  Tutors
[kechi@ieng6-201]:people:150$ cd Students
[kechi@ieng6-201]:Students:151$ ls
data.md  Kevlar
[kechi@ieng6-201]:Students:152$ mv data.md Kevlar
[kechi@ieng6-201]:Students:153$ ls
Kevlar
[kechi@ieng6-201]:Students:154$ cd ..
[kechi@ieng6-201]:people:155$ cd ..
[kechi@ieng6-201]:lab2-starter-fa26:156$ ls
bitstrings.c  Books  lab1  Music  people  README.md
[kechi@ieng6-201]:lab2-starter-fa26:157$ git add people
[kechi@ieng6-201]:lab2-starter-fa26:158$ git push
Everything up-to-date
[kechi@ieng6-201]:lab2-starter-fa26:159$ git add .
[kechi@ieng6-201]:lab2-starter-fa26:160$ git push origin main
Everything up-to-date
[kechi@ieng6-201]:lab2-starter-fa26:161$ git add .
[kechi@ieng6-201]:lab2-starter-fa26:162$ git commit -m "Data.md"
[main 9fe3f9a] Data.md
 Committer: Chi <kechi@ieng6-201.ucsd.edu>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 49 files changed, 270 insertions(+)
 create mode 100644 people/Students/Kevlar/data.md
 create mode 100644 people/TAs/Abijit/data.md
 create mode 100644 people/TAs/Abijit/frozen-heart-8bite.mp4
 create mode 100644 people/TAs/Abijit/mistborn.txt
 create mode 100644 people/TAs/Elena/Adrenaline.mp4
 create mode 100644 people/TAs/Elena/DeathCure.txt
 create mode 100644 people/TAs/Elena/data.md
 create mode 100644 people/TAs/Kevin/Of-Mice-and-Men.txt
 create mode 100644 people/TAs/Kevin/Oh-Yeah-(Insert question mark).mp4
 create mode 100644 people/TAs/Kevin/data.md
 create mode 100644 people/TAs/Nathan/data.md
 create mode 100644 people/TAs/Nathan/to-kill-a-mockingbird-harper-lee.txt
 create mode 100644 people/TAs/Nathan/walk-of-life-dire-straits.mp3
 create mode 100644 people/TAs/Sarah/cherry-wine-grent-perez.mp3
 create mode 100644 people/TAs/Sarah/data.md
 create mode 100644 people/TAs/Sarah/hotel-on-the-corner-of-bitter-and-sweet.txt
 create mode 100644 people/Tutors/Aidan/Life My Life by Aespa.mp4
 create mode 100644 people/Tutors/Aidan/The Defining Decade.txt
 create mode 100644 people/Tutors/Aidan/data.md
 create mode 100644 people/Tutors/Andy/cherry flavoured love inside your heart.mp4
 create mode 100644 people/Tutors/Andy/data.md
 create mode 100644 people/Tutors/Andy/the catcher in the rye.txt
 create mode 100644 people/Tutors/Deven/Book of the New Sun.txt
 create mode 100644 people/Tutors/Deven/Exit Music.mp4
 create mode 100644 people/Tutors/Deven/data.md
 create mode 100644 people/Tutors/Gogo/Let Me Down Slowly.mp4
 create mode 100644 people/Tutors/Gogo/The Handmaid's Tale.txt
 create mode 100644 people/Tutors/Gogo/data.md
 create mode 100644 people/Tutors/Harsha/Blue Valentine.mp3
 create mode 100644 people/Tutors/Harsha/Born a Crime.txt
 create mode 100644 people/Tutors/Harsha/Parasite.mp4
 create mode 100644 people/Tutors/Harsha/data.md
 create mode 100644 people/Tutors/Jinchen/A Moment Apart.mp4
 create mode 100644 people/Tutors/Jinchen/The Three-Body Problem.txt
 create mode 100644 people/Tutors/Jinchen/data.md
 create mode 100644 people/Tutors/Khoa/Sad Cypress by Agatha Christie.txt
 create mode 100644 people/Tutors/Khoa/This Love by Maroon 5.mp4
 create mode 100644 people/Tutors/Khoa/data.md
 create mode 100644 people/Tutors/Kyra/Famous Last Words.mp4
 create mode 100644 people/Tutors/Kyra/The Giver.txt
 create mode 100644 people/Tutors/Kyra/data.md
 create mode 100644 people/Tutors/Miles/Dreams Don't Stop.mp4
 create mode 100644 people/Tutors/Miles/The Alchemist.txt
 create mode 100644 people/Tutors/Miles/data.md
 create mode 100644 people/Tutors/Sahil/Future Starts Slow.mp4
 create mode 100644 people/Tutors/Sahil/The Firm.txt
 create mode 100644 people/Tutors/Sahil/data.md
 create mode 100644 people/file.txt
 create mode 100644 people/outline.md
[kechi@ieng6-201]:lab2-starter-fa26:163$ git push origin main
Enumerating objects: 43, done.
Counting objects: 100% (43/43), done.
Delta compression using up to 16 threads
Compressing objects: 100% (38/38), done.
Writing objects: 100% (42/42), 8.51 KiB | 229.00 KiB/s, done.
Total 42 (delta 1), reused 5 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To github.com:sovereignkc/lab2-starter-fa26.git
   3335e80..9fe3f9a  main -> main
[kechi@ieng6-201]:lab2-starter-fa26:164$ ls
bitstrings.c  Books  lab1  Music  people  README.md
[kechi@ieng6-201]:lab2-starter-fa26:165$ cd lab1
[kechi@ieng6-201]:lab1:166$ ls
Books  Music
[kechi@ieng6-201]:lab1:167$ cp ../lab1/contains.c .
cp: cannot stat '../lab1/contains.c': No such file or directory
[kechi@ieng6-201]:lab1:168$ wget https://cse29.site/week2/assets/lab1_commandline/contains.c
--2026-10-06 18:28:01--  https://cse29.site/week2/assets/lab1_commandline/contains.c
Resolving cse29.site (cse29.site)... 185.199.109.153, 185.199.111.153, 185.199.108.153, ...
Connecting to cse29.site (cse29.site)|185.199.109.153|:443... connected.
HTTP request sent, awaiting response... 200 OK
Length: 467 [text/x-c]
Saving to: ‘contains.c’

contains.c          100%[===================>]     467  --.-KB/s    in 0s      

2026-10-06 18:28:01 (10.2 MB/s) - ‘contains.c’ saved [467/467]

[kechi@ieng6-201]:lab1:169$ gcc contains.c -o contains -Wall
[kechi@ieng6-201]:lab1:170$ ./contains > contains.c
[kechi@ieng6-201]:lab1:171$ cat contains.c
contains 2? 1
contains 4? 0
contains 9? 1
contains 3? 0
[kechi@ieng6-201]:lab1:172$ git status
On branch main
Your branch is up to date with 'origin/main'.

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	contains.c

nothing added to commit but untracked files present (use "git add" to track)
[kechi@ieng6-201]:lab1:173$ ls
Books  contains  contains.c  Music
[kechi@ieng6-201]:lab1:174$ git add contains.c
[kechi@ieng6-201]:lab1:175$ git commit -m "Destructive change attempt"
[main d4db87d] Destructive change attempt
 Committer: Chi <kechi@ieng6-201.ucsd.edu>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 4 insertions(+)
 create mode 100644 lab1/contains.c
[kechi@ieng6-201]:lab1:176$ gcc contains.c -o contains -Wall
contains.c:1:10: error: expected ‘=’, ‘,’, ‘;’, ‘asm’ or ‘__attribute__’ before numeric constant
    1 | contains 2? 1
      |          ^
[kechi@ieng6-201]:lab1:177$ ./contains > contains.c
[kechi@ieng6-201]:lab1:178$ cat contains.c
contains 2? 1
contains 4? 0
contains 9? 1
contains 3? 0
[kechi@ieng6-201]:lab1:179$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 16 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 432 bytes | 144.00 KiB/s, done.
Total 4 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To github.com:sovereignkc/lab2-starter-fa26.git
   9fe3f9a..d4db87d  main -> main
[kechi@ieng6-201]:lab1:180$ ls
Books  contains  contains.c  Music
[kechi@ieng6-201]:lab1:181$ cd ..
[kechi@ieng6-201]:lab2-starter-fa26:182$ ls
bitstrings.c  Books  lab1  Music  people  README.md
[kechi@ieng6-201]:lab2-starter-fa26:183$ vim bitstrings.c
[kechi@ieng6-201]:lab2-starter-fa26:184$ git add bitstrings.c
[kechi@ieng6-201]:lab2-starter-fa26:185$ git commit -m "Bitstrings iwth proper operators to pass assert statements; and , or, and and left shift, etc"
[main 25f6c57] Bitstrings iwth proper operators to pass assert statements; and , or, and and left shift, etc
 Committer: Chi <kechi@ieng6-201.ucsd.edu>
Your name and email address were configured automatically based
on your username and hostname. Please check that they are accurate.
You can suppress this message by setting them explicitly. Run the
following command and follow the instructions in your editor to edit
your configuration file:

    git config --global --edit

After doing this, you may fix the identity used for this commit with:

    git commit --amend --reset-author

 1 file changed, 6 insertions(+), 6 deletions(-)
[kechi@ieng6-201]:lab2-starter-fa26:186$ git push origin main
To github.com:sovereignkc/lab2-starter-fa26.git
 ! [rejected]        main -> main (fetch first)
error: failed to push some refs to 'github.com:sovereignkc/lab2-starter-fa26.git'
hint: Updates were rejected because the remote contains work that you do not
hint: have locally. This is usually caused by another repository pushing to
hint: the same ref. If you want to integrate the remote changes, use
hint: 'git pull' before pushing again.
hint: See the 'Note about fast-forwards' in 'git push --help' for details.
[kechi@ieng6-201]:lab2-starter-fa26:187$ ls
bitstrings.c  Books  lab1  Music  people  README.md
[kechi@ieng6-201]:lab2-starter-fa26:188$ vim bitstrings.c

  assert((a2 & b2) == c2);

  char a3 = 0b01010101;
  char b3 = 0b10101111;
  char c3 = 0b11111111;
  assert((a3 | b3) == c3);

  char a4 = 0b01010101;
  char b4 = 0b10101111;
  char c4 = 0b11111010;
  assert((a4 & b4 << 4) == c4);

  char a5 = 0b01010101;
  char b5 = 0b10101111;
  char c5 = 0b00000101;
  assert((a5 & b5) == c5);

  char a6 = 0b00001010;
  char b6 = 0b00000011;
  char c6 = 0b01010000;
  assert((b6 << 3) == c6);

}
"bitstrings.c" [dos] 38L, 749B                                38,1          Bot
